#include <GameLogic/Factories/program_warehouse.h>
#include <algorithm>
#include <iterator>
#include <tools/loggers.h>
#include <boost/format.hpp>
#include <boost/range/adaptor/map.hpp>
#include <boost/range/algorithm/copy.hpp>
#include <fstream>
#include <sstream>
#include <iterator>

namespace program 
{
static const int eof_mark(-1);
static const std::string filename("programs.pb");

void program_warehouse::load_program(std::ifstream &strm)
{
	int size(0);
	long pos(0);
	Hackers_Project::program_data program_;
	strm >> size;
	if (size == eof_mark)
		return;
	pos = static_cast<long>(strm.tellg());
	std::stringstream buffer;
	copy_n(std::istreambuf_iterator<char>(strm),
		 size,
		 std::ostreambuf_iterator<char>(buffer));
	program_.ParseFromIstream(&buffer);
	strm.seekg(pos + size, strm.beg);
	stored_programs.insert(make_pair(program_.name(), program_));
	printLog(eDebug, eDebugLogLevel, str(boost::format("Program data for '%1%' loaded") % program_.name()));
}

bool program_warehouse::load(std::string dir_path)
{
	std::string filepath(dir_path+"/"+filename);
	printLog(eDebug, eDebugLogLevel, str(boost::format("Loading programs stats. File '%1%'") % filepath));
	std::ifstream strm(filepath.c_str(), std::ifstream::in | std::ifstream::binary);
	if (!strm.good())
	{
		printLog(eDebug, eDebugLogLevel, ("Failed to open data file"));
		return false;
	}
	while (strm.good())
	{
		load_program(strm);
	}
	strm.close();
	printLog(eDebug, eDebugLogLevel, "Loading programs stats finished");
	return true;
}
boost::optional<::Hackers_Project::program_data> program_warehouse::get(program_id id)
{
	boost::optional<::Hackers_Project::program_data> data;
	if (stored_programs.find(id)!=stored_programs.end())
	{
		data = stored_programs[id];
	}
	return data;
}
unsigned int program_warehouse::size()
{
	return stored_programs.size();
}
std::list<program_id> program_warehouse::available_programs()
{
	std::list<program_id> result;
	boost::copy(
		stored_programs | boost::adaptors::map_keys,
		std::back_inserter(result));

	return result;
}

}; //namespace program
