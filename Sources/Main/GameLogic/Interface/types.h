#pragma once
#include <memory>
#include <list>

template<typename Type>
class type_handle
{
public:
	typedef std::shared_ptr<Type> type;
	typedef std::list<Type> cont;
	typedef std::weak_ptr<Type> weak;
};

typedef std::string  program_id;
typedef std::string  deck_id;
typedef int param_value_t;

namespace program
{

enum effect_type
{
	program_attack_effect,
	program_scan_effect,
	program_analyze_effect,
	program_detect_effect,
	program_slow_effect,
	program_virus_effect,
	program_weaken_effect,
	program_shield_effect,
	program_deceive_effect,
	program_decoy_effect,
	program_medic_effect,
	program_relocate_effect,
	program_evaluate_effect,
	program_crypt_effect,
	program_decrypt_effect,
	program_effect_count
};

enum param_value_types
{
	attack_value,
	defence_value,
	range_value,
	detection_strength_value
};

};
