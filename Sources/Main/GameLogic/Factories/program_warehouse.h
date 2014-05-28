#pragma once
#include <map>
#include <string>
#include <GameLogic/proto/program.pb.h>
#include <GameLogic/Interface/types.h>

namespace program 
{
typedef std::map<program_id, ::Hackers_Project::program_data> programs;

class program_warehouse
{
	programs stored_programs;
public:
	bool load(std::string dir_path);
	::Hackers_Project::program_data get(program_id id);
	unsigned int size();
};

}; //namespace program
