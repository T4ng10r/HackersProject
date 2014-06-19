#include <gtest/gtest.h>
#include <GameLogic/Factories/program_factory.h>

static const std::string attack_program_name("Hammer");
static const int attack_value(5);

class ut_program_factory_test : public ::testing::Test
{
public:
	ut_program_factory_test()
	{
	}
};

TEST_F(ut_program_factory_test, programs_count)
{
	EXPECT_NE(0, program::program_factory::instance()->count());
}

TEST_F(ut_program_factory_test, empty_return)
{
	EXPECT_EQ(program::abstract_program_handler(), program::program_factory::instance()->create(""));
}

TEST_F(ut_program_factory_test, attack_program_return)
{
	program::abstract_program_handler program;
	ASSERT_TRUE(program.get() == NULL);
	program = program::program_factory::instance()->create(attack_program_name);
	ASSERT_TRUE(program.get() != NULL);
	EXPECT_EQ(attack_program_name, program->get_name());
}

TEST_F(ut_program_factory_test, attack_program_stats)
{
	program::abstract_program_handler program;
	program = program::program_factory::instance()->create(attack_program_name);
	ASSERT_TRUE(program.get() != NULL);
	EXPECT_EQ(attack_program_name, program->get_name());
	//EXPECT_EQ(attack_value, program->get_value(program::attack_value));
}
