#pragma once
#include <GameLogic/Interface/abstract_program.h>
#include <GameLogic/proto/program.pb.h>
#include <memory>

namespace program
{
class program_private;

class program : public abstract_program
{ 
	friend class program_private;
public:
	program(const ::Hackers_Project::program_data & data_);
	std::string get_name() const;
	std::list<effect> get_effects_list() const;
	unsigned int get_size() const;
	param_value_t get_effects_value(effect_type type) const;
protected:
	std::unique_ptr<program_private> pimpl;
};
}; //program
