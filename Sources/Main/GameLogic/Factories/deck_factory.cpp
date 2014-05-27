#pragma once
#include <GameLogic/Factories/deck_factory.h>
#include <map>

deck_factory_handle deck_factory::instance_(NULL);

struct deck_data
{
	std::string name;
	std::list<program::abstract_program_handler>	programs;
	abstract_cpu_handler cpu;
	unsigned int memory;
};

class deck_factory_private
{
public:
	typedef std::map<deck_id, deck_data>	decks_list;

	deck_factory_private(deck_factory *pub_);
	~deck_factory_private(){};
	void load();
public:
	deck_factory * pub;
	decks_list	programs;
};

deck_factory_private::deck_factory_private(deck_factory * pub_) :pub(pub_)
{}

//////////////////////////////////////////////////////////////////////////
deck_factory::deck_factory() : pimpl(new deck_factory_private(this))
{}

deck_factory::~deck_factory(){}

abstract_deck_handler deck_factory::create(deck_id id)
{

	return abstract_deck_handler();
}

unsigned int deck_factory::count()
{
	return pimpl->programs.size();
}

type_handle<deck_id>::cont deck_factory::get_list()
{
	type_handle<deck_id>::cont cont;

	return cont;
}
