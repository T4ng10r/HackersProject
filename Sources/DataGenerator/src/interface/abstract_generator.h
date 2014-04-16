#pragma once
#include <string>

class abstract_generator
{
public:
	virtual bool load(const std::string & dir_path) = 0;
	virtual unsigned int count() = 0;
	virtual void save(const std::string & dir_path) = 0;
};