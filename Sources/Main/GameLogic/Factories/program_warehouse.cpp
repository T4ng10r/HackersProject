#include <GameLogic/Factories/program_warehouse.h>
#include <functional>
#include <algorithm>
#include <tools/loggers.h>
#include <boost/format.hpp>
#include <fstream>
#include <GameLogic/proto/program.pb.h>

const std::string filename("programs.pb");

void prorgam_warehouse::load(std::string dir_path)
{
	printLog(eDebug, eDebugLogLevel, "Loading programs stats");
	std::string filepath(dir_path+"/"+filename);
	std::ifstream strm(filepath.c_str(), std::ifstream::in | std::ifstream::binary);
	while (!strm.bad())
	{
	}
}
