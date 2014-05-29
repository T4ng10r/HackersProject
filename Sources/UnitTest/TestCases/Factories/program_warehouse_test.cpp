#include <fstream>
#include <gtest/gtest.h>
#include <GameLogic/Factories/program_warehouse.cpp>
#include <GameLogic/proto/program.pb.h>
#include <boost/assign/list_of.hpp>

namespace constant 
{
	const std::string wrong_dir("wrong_dir");
	const std::string correct_dir("Data");
};

class ut_program_warehouse_test : public ::testing::Test
{
public:
	program::program_warehouse sut;
	std::list<std::string> programs_names;
	ut_program_warehouse_test()
	{
		programs_names = boost::assign::list_of
			("Brute")("Codecracker")("Force field")("Hammer")
			("Hidden Virtue")("Invisibility")("Raffles")
			("Replikator")("Seeya")("Shield")("Stealth")
			("Watchdog")("Watchdog v2")("Worm");
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
	ASSERT_EQ(sut.size(), 14);
	std::list<std::string> programs_ = sut.available_programs();
	ASSERT_EQ(programs_names, programs_);
}
