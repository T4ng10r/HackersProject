#pragma once
#include <map>
#include <string>
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
	void load(std::string dir_path);
};