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
	EXPECT_EQ(program_factory::create_program(program_type_count), abstract_program_handler());
}