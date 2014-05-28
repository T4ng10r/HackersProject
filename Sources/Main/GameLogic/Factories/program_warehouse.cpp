#include <GameLogic/Factories/program_warehouse.h>
//#include <functional>
#include <algorithm>
#include <iterator>
#include <tools/loggers.h>
#include <boost/format.hpp>
#include <fstream>
#include <sstream>

namespace program 
{
static const int eof_mark(-1);
static const std::string filename("programs.pb");

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
	int size(0);
	long pos(0);
	while (strm.good())
	{
		Hackers_Project::program_data program_;
		strm>>size;
		if (size==eof_mark)
			break;
		pos = static_cast< long >( strm.tellg( ) );
		std::stringstream buffer;
		copy(std::istreambuf_iterator<char>(strm),
			std::istreambuf_iterator<char>(),
			std::ostreambuf_iterator<char>(buffer));
		program_.ParseFromIstream(&buffer);
		strm.seekg(pos+size, strm.beg);

		stored_programs.insert(make_pair(program_.name(), program_));
		printLog(eDebug, eDebugLogLevel, str(boost::format("Program data for '%1%' loaded") % program_.name()));
	}
	strm.close();
	printLog(eDebug, eDebugLogLevel, "Loading programs stats finished");
	return true;
}
::Hackers_Project::program_data program_warehouse::get(program_id id)
{
	::Hackers_Project::program_data data;
	return data;
}
unsigned int program_warehouse::size()
{
	return 0;
}

}; //namespace program
