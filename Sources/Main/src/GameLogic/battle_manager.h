#pragma once
#include <memory>

namespace battle {

class battle_manager_private;

class battle_manager
{
	friend class battle_manager_private;
public:
	battle_manager();
	~battle_manager();
protected:
	std::unique_ptr<battle_manager_private>	pimpl;
};

};
