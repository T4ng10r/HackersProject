#pragma once
#include <GameLogic/Factories/program_factory.h>
#include <GameLogic/Interface/program_effects.h>
#include <GameLogic/Factories/program_warehouse.h>
#include <map>

program_factory_handle program_factory::instance_(NULL);

class program_factory_private
{
public:
	typedef std::map<program_id, program_data>	programs_list;
	program_factory_private(program_factory *pub_);
	~program_factory_private(){};
	void load();
	program_factory * pub;
	programs_list	programs;
};

program_factory_private::program_factory_private(program_factory * pub_) :pub(pub_)
{}

//////////////////////////////////////////////////////////////////////////
program_factory::program_factory() : pimpl(new program_factory_private(this))
{
}
program_factory::~program_factory(){}

abstract_program_handler program_factory::create(program_id id)
{
	return abstract_program_handler();
}

unsigned int program_factory::count()
{
	return pimpl->programs.size();
}

abstract_program_handler program_factory::create(program_type type)
{
	return abstract_program_handler();
};

type_handle<program_id>::cont program_factory::get_list()
{
	type_handle<program_id>::cont cont;

	return cont;
}
