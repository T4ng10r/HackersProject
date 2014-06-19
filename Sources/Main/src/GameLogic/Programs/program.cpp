#include "program.h"
#include <string>

namespace program
{
class program::program_private
{
public:
	program_private(program * pub_);
public:
	program_stats	effects_map;
	std::string name;
	int size;
	int range;
	program * pub;
};

program::program_private::program_private(program * pub_) :pub(pub_)
{}
//////////////////////////////////////////////////////////////////////////
program::program(const ::Hackers_Project::program_data & data_) : pimpl(new program_private(this))
{
	pimpl->name = data_.name();
	pimpl->size = data_.size();
	pimpl->range = data_.range();
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
	return pimpl->size;
}
param_value_t program::get_value(param_value_types type) const
{
	program_stats::const_iterator iter;
	switch (type)
	{
	case attack_value:
		iter = pimpl->effects_map.find(program_attack_effect);
		if (iter!=pimpl->effects_map.end())
			return iter->second;
		break;
	case defence_value:
		iter = pimpl->effects_map.find(program_shield_effect);
		if (iter!=pimpl->effects_map.end())
			return iter->second;
		break;
	case range_value:
		return pimpl->range;
		break;
	case detection_strength_value:
		iter = pimpl->effects_map.find(program_scan_effect);
		if (iter!=pimpl->effects_map.end())
			return iter->second;
		break;
	default:
		break;
	}

	return 0;
}
} //namespace program
