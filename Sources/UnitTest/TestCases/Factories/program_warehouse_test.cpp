#include <fstream>
#include <gtest/gtest.h>
#include <GameLogic/Factories/program_warehouse.cpp>
#include <GameLogic/proto/program.pb.h>
#include <boost/property_tree/ptree.hpp>

namespace constant 
{
	const std::string wrong_dir("wrong_dir");
	const std::string correct_dir("Data");
};

class ut_program_warehouse_test : public ::testing::Test
{
public:
	program::program_warehouse sut;
	ut_program_warehouse_test()
	{
	}
};

TEST_F(ut_program_warehouse_test, programs_get_empty)
{
	::Hackers_Project::program_data data = sut.get("");
	
	ASSERT_FALSE(data.has_name());
}

TEST_F(ut_program_warehouse_test, programs_load_wrong_dir)
{
	ASSERT_FALSE(sut.load(constant::wrong_dir));
}

TEST_F(ut_program_warehouse_test, programs_load)
{
	ASSERT_TRUE(sut.load(constant::correct_dir));
}
