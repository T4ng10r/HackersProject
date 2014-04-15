#pragma once
#include <string>
#include <boost/property_tree/ptree.hpp>
#include <proto_obj/program.pb.h>

class program_generator
{
public:
	program_generator();
	bool load(const std::string & filename);
	Hackers_Project::data::program_data load_data(const boost::property_tree::ptree::value_type & v );
	unsigned int count();
	void save();
public:
	boost::property_tree::ptree tree;
};