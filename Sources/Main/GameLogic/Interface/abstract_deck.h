#ifndef _ABSTRACT_DECK_INCLUDE_
#define _ABSTRACT_DECK_INCLUDE_
#include <string>
#include <memory>
#include <GameLogic/Interface/abstract_cpu.h>
#include <GameLogic/Interface/abstract_program.h>
#include <GameLogic/Interface/types.h>

class abstract_deck
{
public:
	virtual std::string get_name() const = 0;
	virtual void get_cpu(abstract_cpu_handler cpu) = 0;
	virtual abstract_cpu_handler get_cpu() const = 0;
	virtual unsigned int get_memory();
	virtual abstract_program_cont get_program_list() const = 0;

	virtual unsigned int get_attack_power() const = 0;
	virtual unsigned int get_defence_power() const = 0;
	virtual unsigned int get_value(param_value_type val) const = 0;

};

typedef std::shared_ptr<abstract_deck> abstract_deck_handler;

#endif // _ABSTRACT_DECK_INCLUDE_
