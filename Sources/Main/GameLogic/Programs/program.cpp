#include "program.h"
#include <string>

namespace program
{
class program::program_private
{
public:
	program_private(program * pub_);
public:
	std::map<effect_type, param_value_t>	effects_map;
	std::string name;
	program * pub;
};

program::program_private::program_private(program * pub_) :pub(pub_)
{}
//////////////////////////////////////////////////////////////////////////
program::program(const ::Hackers_Project::program_data & data_) : pimpl(new program_private(this))
{
	pimpl->name = data_.name();
	for (::Hackers_Project::program_data_effect eff : data_.effects())
	{
		pimpl->effects_map[static_cast<effect_type>(eff.effect())] = eff.val();
	}
}
program::~program(){}

std::string program::get_name() const
{
	return pimpl->name;
}

std::list<effect> program::get_effects_list() const
{
	std::list<effect> cont;
	return cont;
}

param_value_t program::get_effects_value(effect_type type) const
{
	return param_value_t();
}

unsigned int program::get_size() const
{
	return 1;
}
};
