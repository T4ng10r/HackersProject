#include <fstream>
#include <gtest/gtest.h>
#include <GameLogic/Factories/program_warehouse.cpp>
#include <GameLogic/proto/program.pb.h>
#include <boost/property_tree/ptree.hpp>

class ut_program_warehouse_test : public ::testing::Test
{
public:
	prorgam_warehouse sut;
	ut_program_warehouse_test()
	{
	}

};

TEST_F(ut_program_warehouse_test, programs_load)
{
	sut.load("Data");
}
