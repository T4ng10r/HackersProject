#include "battle_manager.h"

namespace battle {

class battle_manager_private
{
public:
  battle_manager_private(battle_manager* pub_);

public:
	battle_manager * pub;

};

battle_manager_private::battle_manager_private(battle_manager * pub_) : pub(pub_)
{
}
////////////////////////////////////////
battle_manager::battle_manager() : pimpl(new battle_manager_private(this))
{
}

battle_manager::~battle_manager()
{
}

}
