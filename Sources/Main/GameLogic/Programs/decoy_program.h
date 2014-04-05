#pragma once
#include <GameLogic/Interface/abstract_program.h>

class decoy_program : public abstract_program
{
public:
	virtual std::string get_name() const { return std::string(""); }
	virtual void set_name(std::string) {}
	virtual program_type get_type() const { return program_decoy_type; }
	virtual unsigned int get_size() const { return 0; }
};