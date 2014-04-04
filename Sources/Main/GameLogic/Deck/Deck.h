#ifndef _DECK_INCLUDE_
#define _DECK_INCLUDE_
#include <GameLogic/Interface/abstract_deck.h>

class deck_private;

class deck : public abstract_deck
{
	friend class deck_private;
public:
	deck();
	std::string get_name() const{};
	void get_cpu(abstract_cpu_handler cpu) {};
	abstract_cpu_handler get_cpu() const {};
	virtual abstract_cpu_handler get_cpu() const {};
	virtual unsigned int get_memory() {};
	virtual abstract_program_cont get_program_list() const {};

	virtual param_value_t get_attack_power() const {};
	virtual param_value_t get_defence_power() const {};
	virtual param_value_t get_value(param_value_types val) const {};

protected:
	std::unique_ptr<deck_private> priv_;
};
#endif //_DECK_INCLUDE_ 


