#include <gtest/gtest.h>
#include <GameLogic/proto/program.pb.h>
#include <GameLogic/Programs/program.h>

static const std::string attack_program_name("Hammer");
static const int attack_value(5);

namespace constant
{
	const std::string attack_name("Brute");
}

class ut_program_test : public ::testing::Test
{
public:
	ut_program_test()
	{
	}
	::Hackers_Project::program_data prepare_attack_program()
	{
		::Hackers_Project::program_data data;
		data.set_name(constant::attack_name);
		return data;
	}
};

TEST_F(ut_program_test, program_initialize)
{
	::Hackers_Project::program_data data = prepare_attack_program();

	program::program uut(data);

	EXPECT_NE(constant::attack_name, uut.get_name());
}
