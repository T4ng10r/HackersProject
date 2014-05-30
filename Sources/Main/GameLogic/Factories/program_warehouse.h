#pragma once
#include <map>
#include <string>
#include <GameLogic/proto/program.pb.h>
#include <GameLogic/Interface/types.h>
#include <boost/optional.hpp>

namespace program 
{
typedef std::map<program_id, ::Hackers_Project::program_data> programs;

class program_warehouse
{
	programs stored_programs;
public:
	bool load(std::string dir_path);

	boost::optional<::Hackers_Project::program_data> get(program_id id);
	std::list<program_id> available_programs();
	unsigned int size();
protected:
	void load_program(std::ifstream &strm);
};

}; //namespace program
