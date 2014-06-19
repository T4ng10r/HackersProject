#ifndef _ABSTRACT_CPU_INCLUDE_
#define _ABSTRACT_CPU_INCLUDE_
#include <string>
#include <memory>

class abstract_cpu
{
public:
	virtual std::string get_name() const = 0;
	virtual void set_name(std::string) = 0;
	virtual unsigned int get_speed() const = 0;
};

typedef std::shared_ptr<abstract_cpu> abstract_cpu_handler;
#endif //_ABSTRACT_CPU_INCLUDE_
