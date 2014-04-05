#pragma once
#include <GameLogic/Interface/abstract_program.h>

class program_factory
{
public:
	static abstract_program_handler create_program(program_type type);

};