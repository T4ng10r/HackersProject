#pragma once
#include <string>
#include <boost/property_tree/ptree.hpp>

class program_generator
{
public:
	void load(const std::string & filename);
	void save();
public:
	boost::property_tree::ptree tree;
};