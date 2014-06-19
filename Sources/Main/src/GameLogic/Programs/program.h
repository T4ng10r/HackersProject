#pragma once
#include <GameLogic/Interface/abstract_program.h>
#include <GameLogic/proto/program.pb.h>
#include <memory>

namespace program
{

class program : public abstract_program
{ 
public:
	program(const ::Hackers_Project::program_data & data_);
	virtual ~program();
	std::string get_name() const;
	std::list<effect> get_effects_list() const;
	unsigned int get_size() const;
	param_value_t get_effects_value(effect_type type) const;
	param_value_t get_value(param_value_types type) const;
protected:
	class program_private;
	std::unique_ptr<program_private> pimpl;
};
}; //program
