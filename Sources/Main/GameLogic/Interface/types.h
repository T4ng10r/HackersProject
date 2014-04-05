#ifndef _TYPES_INCLUDE_
#define _TYPES_INCLUDE_

template<typename Type>
class type_handle
{
public:
	typedef std::shared_ptr<Type> type;
	typedef std::list<Type> cont;
	typedef std::weak_ptr<Type> weak;
};

typedef unsigned int param_value_t ;

enum program_type
{
	program_attack_type,
	program_scan_type,
	program_analyze_type,
	program_detect_type,
	program_slow_type,
	program_virus_type,
	program_weaken_type,
	program_shield_type,
	program_deceive_type,
	program_decoy_type,
	program_medic_type,
	program_relocate_type,
	program_evaluate_type,
	program_crypt_type,
	program_decrypt_type,
	program_type_count
};

enum param_value_types
{
	attack_value,
	defence_value,
	range_value,
	detection_strength_value
};

#endif