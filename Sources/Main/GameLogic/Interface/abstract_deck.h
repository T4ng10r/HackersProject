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
	virtual void set_name(std::string deck_name) = 0;

	virtual abstract_cpu_handler get_cpu() const = 0;
	virtual void add_cpu(abstract_cpu_handler cpu) = 0;
	virtual void remove_cpu(abstract_cpu_handler cpu) = 0;

	virtual unsigned int get_memory() const = 0;
	virtual void add_memory(unsigned int mu) = 0;
	virtual void remove_memory(unsigned int mu) = 0;

	virtual unsigned int get_program_count() const = 0;
	virtual program::abstract_program_cont get_program_list() const = 0;
	virtual void add_program(program::abstract_program_handler program) = 0;
	virtual void remove_program(program::abstract_program_handler program) = 0;
	virtual void remove_program(unsigned int index) = 0;

	virtual param_value_t get_attack_power() const = 0;
	virtual param_value_t get_defence_power() const = 0;
	virtual param_value_t get_value(program::param_value_types val) const = 0;

};

typedef std::shared_ptr<abstract_deck> abstract_deck_handler;

#endif // _ABSTRACT_DECK_INCLUDE_
