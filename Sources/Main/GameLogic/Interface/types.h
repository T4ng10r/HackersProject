#ifndef _TYPES_INCLUDE_
#define _TYPES_INCLUDE_

enum program_type
{
	program_attack_type,
	program_scan_type,
	program_analyze_type,
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
	program_decrypt_type
};

enum param_value_type
{
	attack_value,
	defence_value
};

#endif