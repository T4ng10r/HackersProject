#include <GameLogic/Factories/program_warehouse.h>
#include <functional>
#include <algorithm>
#include <boost/property_tree/xml_parser.hpp>
#include <tools/loggers.h>
#include <boost/format.hpp>

const std::string root_name("PROGRAMS");
const std::string program_keyword("PROGRAM");
const std::string program_attr_keyword("<xmlattr>");
const std::string program_name_keyword(program_attr_keyword+".name");

program_data_handler prorgam_warehouse::parse_program(const boost::property_tree::ptree::value_type & node)
{
	program_data_handler data(new program_data);

	if (node.first != program_keyword)
	{
		printLog(eDebug, eDebugLogLevel, "parse_program: first keyword is not PROGRAM");
		return data;
	}
	data->id = node.second.get<std::string>(program_name_keyword);
	printLog(eDebug, eDebugLogLevel, str(boost::format("Loading program '%1%'") % data->id));

	for (const boost::property_tree::ptree::value_type & val : node.second)
	{
		std::string attr_name = val.first;
		if (attr_name == program_attr_keyword)
			continue;
		int attr_val = val.second.get_value<int>();
		//data->stats[attr_name] = attr_val;
	}
	return data;
}
void prorgam_warehouse::load(std::string path)
{
	printLog(eDebug, eDebugLogLevel, "Loading programs stats");
	tree.clear();
	read_xml(path,tree);
	boost::property_tree::ptree & programs = tree.get_child(root_name);
	for(boost::property_tree::ptree::value_type & node : programs)
	{
		parse_program(node);
	}
	//std::for_each(programs.begin(),programs.end(),
	//	//[](boost::property_tree::ptree::value_type & kv) {
	//	//printLog(eDebug, eDebugLogLevel, str(boost::format("Loading program '%1%'") % kv.first)); }
	//	std::bind(&prorgam_warehouse::parse_program, this, _1)
	//	//std::bind(&prorgam_warehouse::parse_program, this, _1)
	//	);
}
