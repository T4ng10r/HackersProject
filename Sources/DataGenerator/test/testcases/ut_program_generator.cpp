#include <gtest/gtest.h>
#include <generators/program_generator.h>
#include <memory>
#include <list>
#include <fstream>
#include <sstream>
#include <boost/assign/list_of.hpp>

namespace constants {
const std::string dir_path("Data/xml");
const std::string save_dir_path("Data");
const std::string filename("programs.pb");
const std::string program_name_tree_path("<xmlattr>.name");
const std::string effects_keyword("effects");
const std::string attack_keyword(effects_keyword + ".attack");
const std::string decrypt_keyword(effects_keyword + ".decrypt");
const std::string weaken_keyword(effects_keyword + ".weaken");
const std::string size_keyword("size");
const int eof_mark(-1);
}

class ut_program_generator_test : public ::testing::Test
{
public:
	std::shared_ptr<program_generator> uut;
	std::list<std::string> programs_names;
public:
	ut_program_generator_test() : uut(new program_generator())
	{
		programs_names = boost::assign::list_of
			("Brute")("Hammer")("Worm")("Watchdog")
			("Codecracker")("Raffles")("Watchdog v2")
			("Seeya")("Hidden Virtue")("Invisibility")
			("Stealth")("Replikator")("Shield")("Force field");
	}
	boost::property_tree::ptree prepare_ptree_program()
	{
		boost::property_tree::ptree tree;
		tree.put(constants::program_name_tree_path, "Brute");
		//tree.add(constants::effects_keyword, "");
		tree.add(constants::attack_keyword, 1);
		tree.add(constants::decrypt_keyword, 3);
		tree.add(constants::weaken_keyword, 5);
		tree.add(constants::size_keyword, 2);
		return tree;
	}

	void test_proto_file()
	{
		std::string filepath(constants::save_dir_path + "/" + constants::filename);
		std::ifstream strm(filepath.c_str(), std::ifstream::in | std::ifstream::binary);
		if (!strm.good())
		{
			ASSERT_FALSE(1);
			return;
		}
		int size(0);
		long pos(0);

		std::list<std::string>::const_iterator iter = programs_names.begin();
		int index = 0;
		while (strm.good())
		{
			Hackers_Project::program_data program_;
			strm >> size;
			if (size == constants::eof_mark)
				break;
			pos = static_cast<long>(strm.tellg());
			std::stringstream buffer;
			copy(std::istreambuf_iterator<char>(strm),
				 std::istreambuf_iterator<char>(),
				 std::ostreambuf_iterator<char>(buffer));
			program_.ParseFromIstream(&buffer);
			strm.seekg(pos + size, strm.beg);
			ASSERT_EQ(program_.name(), *iter) << "Error on '" << index <<"' item ";
			iter++;
			index++;
		}
		strm.close();
		return;
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
	EXPECT_EQ(14, uut->count());
}

TEST_F(ut_program_generator_test, programs_save)
{
	EXPECT_TRUE(uut->load(constants::dir_path));
	EXPECT_EQ(14, uut->count());
	uut->save(constants::save_dir_path);
	SCOPED_TRACE("Entering test_proto_file for programs");
	test_proto_file();
}
