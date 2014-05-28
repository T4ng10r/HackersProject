#pragma once
#include <GameLogic/Factories/program_factory.h>
#include <GameLogic/Factories/program_warehouse.h>
#include <map>
#include <Tools/loggers.h>

namespace program
{

program_factory_handle program_factory::instance_(NULL);

class program_factory_private
{
public:
	program_factory_private(program_factory *pub_);
	~program_factory_private(){};
	void load();
	program_factory * pub;
	program_warehouse programs;
};

program_factory_private::program_factory_private(program_factory * pub_) :pub(pub_)
{}

//////////////////////////////////////////////////////////////////////////
program_factory::program_factory() : pimpl(new program_factory_private(this))
{
}
program_factory::~program_factory(){}

program::abstract_program_handler program_factory::create(program_id id)
{
	::Hackers_Project::program_data data = pimpl->programs.get(id);
	return program::abstract_program_handler();
}

unsigned int program_factory::count()
{
	return pimpl->programs.size();
}

type_handle<program_id>::cont program_factory::get_list()
{
	type_handle<program_id>::cont cont;

	return cont;
}

}; //namespace program