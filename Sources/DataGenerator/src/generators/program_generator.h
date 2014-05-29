#pragma once
#include <string>
#include <boost/property_tree/ptree.hpp>
#include <proto_obj/program.pb.h>
#include <interface/abstract_generator.h>

class program_generator : public abstract_generator
{
public:
	program_generator();
	bool load(const std::string & dir_path);
	Hackers_Project::program_data load_data(const boost::property_tree::ptree & v );

	void parse_effects_tree(const boost::property_tree::ptree &effects_,
							Hackers_Project::program_data &program_data_);

	unsigned int count();
	void save(const std::string & dir_path);
public:
	boost::property_tree::ptree tree;
};