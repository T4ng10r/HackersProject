#pragma once
#include <GameLogic/Interface/types.h>
#include <GameLogic/Interface/abstract_deck.h>

class deck_factory;
class deck_factory_private;
typedef type_handle<deck_factory>::type deck_factory_handle;

class deck_factory
{
	friend class program_factory_private;
protected:
	deck_factory();
	static deck_factory_handle instance_;
public:
	~deck_factory();
	static deck_factory_handle instance()
	{
		if (instance_.get() == NULL)
		{
			if (instance_.get() == NULL)
			{
				instance_.reset(new deck_factory());
			}
		}
		return instance_;
	}
	abstract_deck_handler create(deck_id id);
 	unsigned int count();
	type_handle<deck_id>::cont get_list();
protected:
	std::unique_ptr<deck_factory_private>	pimpl;
};
