#pragma once
#include <map>
#include <string>
#include <boost/property_tree/ptree.hpp>
#include <GameLogic/Interface/program_effects.h>
#include <GameLogic/Interface/types.h>

typedef std::map<program_effects, param_value_t> program_stats;

struct program_data
{
	program_id id;
	program_stats stats;
};

typedef type_handle<program_data>::type program_data_handler;

class prorgam_warehouse
{
public:
	boost::property_tree::ptree tree;

	program_data_handler parse_program(const boost::property_tree::ptree::value_type & node);
	void load(std::string path);
};