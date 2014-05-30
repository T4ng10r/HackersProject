#pragma once
#include <boost/property_tree/ptree.hpp>
#include <string>

void display(const int depth, const boost::property_tree::ptree& tree);

std::string &ltrim(std::string &s);
std::string &rtrim(std::string &s);
std::string &trim(std::string &s);

