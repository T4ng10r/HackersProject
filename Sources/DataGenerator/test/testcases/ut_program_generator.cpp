#include <gtest/gtest.h>
#include <generators/program_generator.h>
#include <memory>


namespace constants {
const std::string filename("data/programs.xml");
const std::string program_keyword("PROGRAM");
const std::string program_name_keyword(program_keyword+"<xmlattr>.name");
}

class ut_program_generator_test : public ::testing::Test
{
public:
	std::shared_ptr<program_generator> uut;
public:
	ut_program_generator_test() : uut(new program_generator())
	{
	}
	boost::property_tree::ptree prepare_ptree_program()
	{
		boost::property_tree::ptree tree;
		tree.add(constants::program_keyword.c_str(), "");
		boost::property_tree::ptree program = tree.get_child(constants::program_keyword);

		return tree;
	}
};

TEST_F(ut_program_generator_test, load_data_1)
{
	//Given
	boost::property_tree::ptree::value_type tree = *(prepare_ptree_program().begin());
	//When 
	Hackers_Project::data::program_data program_data_ = uut->load_data(tree);
	// THEN
	EXPECT_EQ("Brute", program_data_.name());
}


TEST_F(ut_program_generator_test, wrong_filename)
{
	EXPECT_FALSE(uut->load(""));
}



TEST_F(ut_program_generator_test, programs_count)
{
	EXPECT_TRUE(uut->load(constants::filename));
}
