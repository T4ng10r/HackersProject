#pragma once
//#ifndef _ABSTRACT_PROGRAM_INCLUDE_
//#define _ABSTRACT_PROGRAM_INCLUDE_
#include <memory>
#include <string>
#include <list>
#include <GameLogic/Interface/types.h>

class abstract_program
{
public:
	virtual std::string get_name() const = 0;
	virtual void set_name(std::string) = 0;
	virtual program_type get_type() const = 0;
	virtual unsigned int get_size() const = 0;
};

typedef type_handle<abstract_program>::type abstract_program_handler;
typedef type_handle<abstract_program>::cont abstract_program_cont;
//#endif //_ABSTRACT_PROGRAM_INCLUDE_
