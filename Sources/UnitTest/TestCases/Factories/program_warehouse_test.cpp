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

	Hackers_Project::program_data prepare_stream()
	{
		Hackers_Project::program_data data;
		boost::property_tree::ptree node;
		node.put("PROGRAM", "");
		node.put("PROGRAM.<xmlattr>.name", "Brute");
		node.put("PROGRAM.Attack", "1");
		node.put("PROGRAM.Size", "2");
		node.put("PROGRAM.Analyze", "3");
		node.put("PROGRAM.Deamon", "10");
		return data;
	}
};

TEST_F(ut_program_warehouse_test, parsing_program)
{
	Hackers_Project::program_data data;
	data.set_name("Brute");
	::Hackers_Project::program_data_effect * effect = data.add_effects();
	effect->set_effect(Hackers_Project::program_data::attack);
	effect->set_val(1);



	Hackers_Project::program_data data1;
	data1.set_name("Tank");
	::Hackers_Project::program_data_effect * effect1 = data1.add_effects();
	effect1->set_effect(Hackers_Project::program_data::decrypt);
	effect1->set_val(2);

	std::fstream output("myfile", std::ios::out /*| std::ios::binary*/);
	data.SerializeToOstream(&output);
	data1.SerializeToOstream(&output);
	output.close();

	program_data_handler data_;// = sut.parse_program(node.front());
	ASSERT_TRUE(data_.get() != NULL);
	ASSERT_EQ(data_->id, "Brute");
}


TEST_F(ut_program_warehouse_test, programs_load)
{
	sut.load("Data/programs.xml");
}
