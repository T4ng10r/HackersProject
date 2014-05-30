#pragma once
#include <memory>
#include <string>
#include <list>
#include <GameLogic/Interface/types.h>
#include <GameLogic/proto/program.pb.h>

namespace program
{

struct effect
{
	effect_type type;
	param_value_t  value;
};

class abstract_program
{
public:
	virtual ~abstract_program(){}
	virtual std::string get_name() const = 0;
	virtual unsigned int get_size() const = 0;
	virtual std::list<effect> get_effects_list() const = 0;
	virtual param_value_t get_effects_value(effect_type type) const = 0;
};

typedef type_handle<abstract_program>::type abstract_program_handler;
typedef type_handle<abstract_program>::cont abstract_program_cont;
};
//#endif //_ABSTRACT_PROGRAM_INCLUDE_
