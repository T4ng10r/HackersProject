#pragma once
#include <GameLogic/Interface/abstract_program.h>

class program_factory;
class program_factory_private;
typedef std::shared_ptr<program_factory> program_factory_handle;

class program_factory
{
protected:
	program_factory();
	static program_factory_handle instance_;
public:
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
	abstract_program_handler create_program(program_type type);
 	unsigned int get_programs_count();
	int get_programs_list();
private:
	std::unique_ptr<program_factory_private>	pimpl;
};
