#pragma once
#include <GameLogic/Factories/program_factory.h>
#include <GameLogic/Programs/analyze_program.h>
#include <GameLogic/Programs/attack_program.h>
#include <GameLogic/Programs/crypt_program.h>
#include <GameLogic/Programs/deceive_program.h>
#include <GameLogic/Programs/decoy_program.h>
#include <GameLogic/Programs/decrypt_program.h>
#include <GameLogic/Programs/detect_program.h>
#include <GameLogic/Programs/evaluate_program.h>
#include <GameLogic/Programs/medic_program.h>
#include <GameLogic/Programs/relocate_program.h>
#include <GameLogic/Programs/scan_program.h>
#include <GameLogic/Programs/shield_program.h>
#include <GameLogic/Programs/slow_program.h>
#include <GameLogic/Programs/virus_program.h>
#include <GameLogic/Programs/weaken_program.h>
#include <GameLogic/Interface/program_effects.h>
#include <map>

program_factory_handle program_factory::instance_(NULL);

struct program_data
{
	std::map<program_effects, param_value_t>	effects;
};

class program_factory_private
{
public:
	program_factory_private(program_factory *pub_);
	void load();
	program_factory * pub;
};

program_factory_private::program_factory_private(program_factory * pub_) :pub(pub_)
{}

//////////////////////////////////////////////////////////////////////////
program_factory::program_factory() : pimpl(new program_factory_private(this))
{
}

abstract_program_handler program_factory::create_program(program_type type)
{
	switch (type)
	{
		case program_attack_type:	
			return  std::static_pointer_cast<abstract_program>(std::shared_ptr<attack_program>(new attack_program()));
		case program_scan_type:
			return  std::static_pointer_cast<abstract_program>(std::shared_ptr<scan_program>(new scan_program()));
		case program_analyze_type:
			return  std::static_pointer_cast<abstract_program>(std::shared_ptr<analyze_program>(new analyze_program()));
		case program_detect_type:
			return  std::static_pointer_cast<abstract_program>(std::shared_ptr<detect_program>(new detect_program()));
		case program_slow_type:
			return  std::static_pointer_cast<abstract_program>(std::shared_ptr<slow_program>(new slow_program()));
		case program_virus_type:
			return  std::static_pointer_cast<abstract_program>(std::shared_ptr<virus_program>(new virus_program()));
		case program_weaken_type:
			return  std::static_pointer_cast<abstract_program>(std::shared_ptr<weaken_program>(new weaken_program()));
		case program_shield_type:
			return  std::static_pointer_cast<abstract_program>(std::shared_ptr<shield_program>(new shield_program()));
		case program_deceive_type:
			return  std::static_pointer_cast<abstract_program>(std::shared_ptr<deceive_program>(new deceive_program()));
		case program_decoy_type:
			return  std::static_pointer_cast<abstract_program>(std::shared_ptr<decoy_program>(new decoy_program()));
		case program_medic_type:
			return  std::static_pointer_cast<abstract_program>(std::shared_ptr<medic_program>(new medic_program()));
		case program_relocate_type:
			return  std::static_pointer_cast<abstract_program>(std::shared_ptr<relocate_program>(new relocate_program()));
		case program_evaluate_type:
			return  std::static_pointer_cast<abstract_program>(std::shared_ptr<evaluate_program>(new evaluate_program()));
		case program_crypt_type:
			return  std::static_pointer_cast<abstract_program>(std::shared_ptr<crypt_program>(new crypt_program()));
		case program_decrypt_type:
			return  std::static_pointer_cast<abstract_program>(std::shared_ptr<decrypt_program>(new decrypt_program()));
	}
	return abstract_program_handler();
};
