#pragma once
#include <GameLogic/Interface/types.h>
#include <GameLogic/Interface/abstract_program.h>

class program_factory;
class program_factory_private;
typedef type_handle<program_factory>::type program_factory_handle;

class program_factory
{
	friend class program_factory_private;
protected:
	program_factory();
	static program_factory_handle instance_;
public:
	~program_factory();
	static program_factory_handle instance()
	{
		if (instance_.get() == NULL)
		{
			if (instance_.get() == NULL)
			{
				instance_.reset(new program_factory());
			}
		}
		return instance_;
	}
	abstract_program_handler create(program_type type);
	abstract_program_handler create(program_id id);
 	unsigned int count();
	type_handle<program_id>::cont get_list();
protected:
	std::unique_ptr<program_factory_private>	pimpl;
};
