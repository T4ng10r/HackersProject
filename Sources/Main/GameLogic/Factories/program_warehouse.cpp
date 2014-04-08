#pragma once
#include <functional>
#include <algorithm>
#include <string>
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/xml_parser.hpp>
#include <tools/loggers.h>
#include <boost/format.hpp>

const std::string root_name("PROGRAMS");
const std::string program_keyword("PROGRAM");

class prorgam_warehouse
{
public:
	boost::property_tree::ptree tree;

	unsigned int count()
	{
		return 0;
	}
	void parse_program(const boost::property_tree::ptree::value_type & node)
	{
		if (node.first != program_keyword)
		{
			printLog(eDebug, eDebugLogLevel, "parse_program: first keyword is not PROGRAM");
			return;
		}
		printLog(eDebug, eDebugLogLevel, str(boost::format("Loading program '%1%'") % node.first));

	}
	void load(std::string path)
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
};