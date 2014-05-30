#pragma once
#include <GameLogic/Factories/program_factory.h>
#include <GameLogic/Factories/program_warehouse.h>
#include <GameLogic/Programs/program.h>
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
{
	programs.load("Data");
}

//////////////////////////////////////////////////////////////////////////
program_factory::program_factory() : pimpl(new program_factory_private(this))
{
}
program_factory::~program_factory(){}

abstract_program_handler program_factory::create(program_id id)
{
	::Hackers_Project::program_data data = pimpl->programs.get(id);

	std::shared_ptr<program> program_(new program(data));
	
	return std::dynamic_pointer_cast<abstract_program>(program_);
}

unsigned int program_factory::count()
{
	return pimpl->programs.size();
}

type_handle<program_id>::cont program_factory::get_list()
{
	return pimpl->programs.available_programs();
}

}; //namespace program