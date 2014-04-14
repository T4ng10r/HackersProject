#include <generators/program_generator.h>
#include <boost/property_tree/xml_parser.hpp>

namespace constants
{
	const std::string root_keyword("PROGRAMS");
	const std::string progam_keyword("PROGRAM");
	const std::string progam_name_keyword("<xmlattr>.name");
};

Hackers_Project::data::program_data program_generator::load_data(const boost::property_tree::ptree::value_type & val )
{
	using boost::property_tree::ptree;
	Hackers_Project::data::program_data program_data_;
	program_data_.set_name(val.second.get<std::string>(constants::progam_name_keyword));
	for(const ptree::value_type & eff : val.second)
	{
		//Hackers_Project::data::program_data program_data_ = load_data(val);
	}

	return program_data_;
}

bool program_generator::load(const std::string & filename)
{
	using boost::property_tree::ptree;
	try{
		read_xml(filename, tree);
	}
	catch (boost::property_tree::xml_parser::xml_parser_error const&  /*ex*/)
	{
		return false;
	}
	ptree program_tree = tree.get_child(constants::root_keyword);
	for(const ptree::value_type & v : program_tree)
	{
		Hackers_Project::data::program_data program_data_ = load_data(v);
	}
	return false;
}

void program_generator::save()
{

}
