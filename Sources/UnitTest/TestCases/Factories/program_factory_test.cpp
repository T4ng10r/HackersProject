#include <gtest/gtest.h>
#include <GameLogic/Factories/program_factory.h>

class ut_program_factory_test : public ::testing::Test
{
public:
	ut_program_factory_test()
	{
	}
};

TEST_F(ut_program_factory_test, programs_count)
{
	EXPECT_NE(program::program_factory::instance()->count(), 0);
}

TEST_F(ut_program_factory_test, empty_return)
{
	EXPECT_EQ(program::program_factory::instance()->create(""), program::abstract_program_handler());
}

TEST_F(ut_program_factory_test, attack_program_return)
{
	program::abstract_program_handler program;
	ASSERT_TRUE(program.get() == NULL);
	program = program::program_factory::instance()->create("");
	ASSERT_TRUE(program.get() != NULL);
	//EXPECT_EQ(program->get_type(), program_attack_type);
}
