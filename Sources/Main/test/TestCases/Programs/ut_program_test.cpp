#include <gtest/gtest.h>
#include <GameLogic/proto/program.pb.h>
#include <GameLogic/Programs/program.h>

namespace program
{

namespace constant
{
	const std::string attack_program_name("Hammer");
	const int attack_value(5);
	const int defence_value(4);
	const int scan_value(6);
	const int size_value(1);
	const int range_value(3);
}

class ut_program_test : public ::testing::Test
{
public:
	ut_program_test()
	{
	}

	::Hackers_Project::program_data prepare_program()
	{
		::Hackers_Project::program_data data;
		data.set_name(constant::attack_program_name);
		data.set_size(constant::size_value);
		data.set_range(constant::range_value);
		::Hackers_Project::program_data_effect* effect = data.add_effects();
		effect->set_val(constant::attack_value);
		effect->set_effect(::Hackers_Project::program_data::attack);
		effect = data.add_effects();
		effect->set_val(constant::defence_value);
		effect->set_effect(::Hackers_Project::program_data::shield);
		effect = data.add_effects();
		effect->set_val(constant::scan_value);
		effect->set_effect(::Hackers_Project::program_data::scan);
		return data;
	}
};

TEST_F(ut_program_test, program_initialize)
{
	::Hackers_Project::program_data data = prepare_program();

	program uut(data);

	EXPECT_EQ(constant::attack_program_name, uut.get_name());
	EXPECT_EQ(constant::attack_value, uut.get_value(attack_value));
	EXPECT_EQ(constant::defence_value, uut.get_value(defence_value));
	EXPECT_EQ(constant::scan_value, uut.get_value(detection_strength_value));
	EXPECT_EQ(constant::size_value, uut.get_value(range_value));
	//EXPECT_EQ(constant::range_value, uut.get_value(detection_strength_value));
}
};
