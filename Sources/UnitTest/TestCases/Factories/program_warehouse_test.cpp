#include <gtest/gtest.h>
#include <GameLogic/Factories/program_warehouse.cpp>

class ut_program_warehouse_test : public ::testing::Test
{
public:
	prorgam_warehouse sut;
	ut_program_warehouse_test()
	{
	}
};

TEST_F(ut_program_warehouse_test, programs_empty)
{
	EXPECT_EQ(sut.count(), 0);
}

TEST_F(ut_program_warehouse_test, programs_load)
{
	EXPECT_EQ(sut.count(), 0);
	EXPECT_EQ(sut.count(), 0);
}
