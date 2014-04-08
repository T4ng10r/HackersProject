#include <gtest/gtest.h>
#include <GameLogic/Factories/program_factory.h>

class ut_program_factory_test : public ::testing::Test
{
public:
	ut_program_factory_test()
	{
	}
};

TEST_F(ut_program_factory_test, empty_return)
{

	EXPECT_EQ(program_factory::instance()->create_program(program_type_count), abstract_program_handler());
}

TEST_F(ut_program_factory_test, attack_program_return)
{
	abstract_program_handler program;
	ASSERT_TRUE(program.get() == NULL);
	program = program_factory::instance()->create_program(program_attack_type);
	ASSERT_TRUE(program.get() != NULL);
	EXPECT_EQ(program->get_type(), program_attack_type);
}
