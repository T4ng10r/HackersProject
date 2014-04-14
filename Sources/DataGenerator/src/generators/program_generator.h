#pragma once
#include <string>
#include <boost/property_tree/ptree.hpp>
#include <proto_obj/program.pb.h>

class program_generator
{
public:
	bool load(const std::string & filename);
	Hackers_Project::data::program_data load_data(const boost::property_tree::ptree::value_type & v );
	void save();
public:
	boost::property_tree::ptree tree;
};