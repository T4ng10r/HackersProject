#include <generators/program_generator.h>
#include <boost/property_tree/xml_parser.hpp>
#include <fstream>
#include <Tools/loggers.h>
#include <Tools/xml_tools.h>
#include <boost/format.hpp>

namespace constants
{
	const std::string in_filename("programs.xml");
	const std::string out_filename("programs.pb");
	const std::string root_keyword("PROGRAMS");
	const std::string program_keyword("PROGRAM");
	const std::string xmlattr_keyword("<xmlattr>");
	const std::string program_name_tree_path(xmlattr_keyword + ".name");
	const std::string effects_tree_path("effects");
	const int eof_mark(-1);
};

std::vector<Hackers_Project::program_data> program_data_cont;
using boost::property_tree::ptree;

program_generator::program_generator()
{
	program_data_cont.clear();
}

void program_generator::parse_effects_tree(const boost::property_tree::ptree &effects_, 
											 Hackers_Project::program_data &program_data_)
{
	for (const ptree::value_type & eff : effects_)
	{
		if (eff.first == constants::xmlattr_keyword)
			continue;
		::Hackers_Project::program_data_effect* effect = program_data_.add_effects();
		::Hackers_Project::program_data_effect_type effect_type_;
		::Hackers_Project::program_data::effect_type_Parse(eff.first, &effect_type_);
		effect->set_effect(effect_type_);
		effect->set_val(eff.second.get_value<int>());
	}
}

Hackers_Project::program_data program_generator::load_data(const boost::property_tree::ptree & program_ )
{
	Hackers_Project::program_data program_data_;
	//display(0, program_);
	try
	{
		program_data_.set_name(program_.get<std::string>(constants::program_name_tree_path));
		parse_effects_tree(program_.get_child(constants::effects_tree_path), program_data_);
	}
	catch (boost::property_tree::ptree_bad_path & ex)
	{
		printLog(eDebug, eErrorLogLevel, str(boost::format("'%1%'") % ex.what()));
		return Hackers_Project::program_data();
	}

	return program_data_;
}

bool program_generator::load(const std::string & dir_path)
{
	std::string filename(dir_path+"/"+constants::in_filename);
	program_data_cont.clear();
	using boost::property_tree::ptree;
	try{
		read_xml(filename, tree);
	}
	catch (boost::property_tree::xml_parser::xml_parser_error const&  ex)
	{
		printLog(eDebug, eErrorLogLevel, str(boost::format("Loading '%1%' failed") % filename));
		std::string reason = ex.what();
		return false;
	}
	printLog(eDebug, eDebugLogLevel, str(boost::format("Loading '%1%' succeed") % filename));
	ptree program_tree = tree.get_child(constants::root_keyword);
	for(const ptree::value_type & program_ : program_tree)
	{
		if (program_.first != constants::program_keyword)
		{
			printLog(eDebug, eErrorLogLevel, str(boost::format("Expected '%1% - found '%2%' tag") 
				% constants::program_keyword % program_.first));
			continue;
		}
		Hackers_Project::program_data program_data_ = load_data(program_.second);
		program_data_cont.push_back(program_data_);
	}
	return true;
}
unsigned int program_generator::count()
{
	return program_data_cont.size();
}

void program_generator::save(const std::string & dir_path)
{
	std::string filename(dir_path+"/"+constants::out_filename);
	std::ofstream strm(filename.c_str(), std::ofstream::out | std::ofstream::binary);
	printLog(eDebug, eInfoLogLevel, str(boost::format("Saving to '%1%' started") % filename));
	for(const Hackers_Project::program_data & item  : program_data_cont)
	{
		std::string msg_content;
		item.SerializeToString(&msg_content);
		strm<<msg_content.size();
		item.SerializeToOstream(&strm);
		printLog(eDebug, eDebugLogLevel, str(boost::format("Program %1%, size %2%, pos after %3%") 
			% item.name() % msg_content.size() % strm.tellp()));
	}
	strm<<constants::eof_mark;
	printLog(eDebug, eInfoLogLevel, "Saving finished");
	strm.close();
}
