#include <gtest/gtest.h>
#include <generators/program_generator.h>
#include <memory>


namespace constants {
const std::string dir_path("Data/xml");
const std::string program_keyword("PROGRAM");
const std::string program_name_keyword(program_keyword + ".<xmlattr>.name");
const std::string attack_keyword(program_keyword + ".attack");
const std::string decrypt_keyword(program_keyword + ".decrypt");
const std::string weaken_keyword(program_keyword + ".weaken");
}

class ut_program_generator_test : public ::testing::Test
{
public:
	std::shared_ptr<program_generator> uut;
public:
	ut_program_generator_test() : uut(new program_generator())
	{
	}
	boost::property_tree::ptree::value_type prepare_ptree_program()
	{
		boost::property_tree::ptree tree;
		tree.add(constants::program_keyword, "");
		tree.put(constants::program_name_keyword, "Brute");
		tree.add(constants::attack_keyword, 1);
		tree.add(constants::decrypt_keyword, 3);
		tree.add(constants::weaken_keyword, 5);
		return *(tree.begin());
	}
};

TEST_F(ut_program_generator_test, load_data)
{
	//Given
	//When 
	Hackers_Project::program_data program_data_ = uut->load_data(prepare_ptree_program());
	// THEN
	EXPECT_EQ("Brute", program_data_.name());
	const ::google::protobuf::RepeatedPtrField< ::Hackers_Project::program_data_effect > & effects = program_data_.effects();
	EXPECT_EQ(3, effects.size());
	::Hackers_Project::program_data_effect effect_ = effects.Get(0);
	EXPECT_EQ(::Hackers_Project::program_data::attack, effect_.effect());
	EXPECT_EQ(1, effect_.val());
	effect_ = effects.Get(1);
	EXPECT_EQ(::Hackers_Project::program_data::decrypt, effect_.effect());
	EXPECT_EQ(3, effect_.val());
	effect_ = effects.Get(2);
	EXPECT_EQ(::Hackers_Project::program_data::weaken, effect_.effect());
	EXPECT_EQ(5, effect_.val());
}

TEST_F(ut_program_generator_test, wrong_filename)
{
	EXPECT_EQ(0, uut->count());
	EXPECT_FALSE(uut->load(""));
}

TEST_F(ut_program_generator_test, programs_load)
{
	EXPECT_TRUE(uut->load(constants::dir_path));
	EXPECT_EQ(1, uut->count());
}
