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

		return tree;
	}
};

TEST_F(ut_program_generator_test, load_data_1)
{
	EXPECT_FALSE(uut->load(""));
}


TEST_F(ut_program_generator_test, wrong_filename)
{
	EXPECT_FALSE(uut->load(""));
}



TEST_F(ut_program_generator_test, programs_count)
{
	EXPECT_TRUE(uut->load(constants::filename));
}
