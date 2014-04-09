#include <gtest/gtest.h>
#include <GameLogic/Factories/program_warehouse.cpp>
#include <boost/property_tree/ptree.hpp>

class ut_program_warehouse_test : public ::testing::Test
{
public:
	prorgam_warehouse sut;
	ut_program_warehouse_test()
	{
	}

	boost::property_tree::ptree prepare_node()
	{
		boost::property_tree::ptree node;
		node.put("PROGRAM", "");
		node.put("PROGRAM.<xmlattr>.name", "Brute");
		node.put("PROGRAM.Attack", "1");
		node.put("PROGRAM.Size", "2");
		node.put("PROGRAM.Analyze", "3");
		node.put("PROGRAM.Deamon", "10");
		return node;
	}
};

TEST_F(ut_program_warehouse_test, parsing_program)
{
	boost::property_tree::ptree node = prepare_node();

	program_data_handler data = sut.parse_program(node.front());
	ASSERT_TRUE(data.get() != NULL);
	ASSERT_EQ(data->id, "Brute");
}


TEST_F(ut_program_warehouse_test, programs_load)
{
	sut.load("Data/programs.xml");
}
