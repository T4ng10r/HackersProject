#include <boost/program_options.hpp>
#include <generators/program_generator.h>
#include <list>
#include <Tools/loggers.h>
#include <boost/assign.hpp>
#include <boost/format.hpp>

std::string in_dir_path;
std::string out_dir_path;
std::list<abstract_generator*> generator_cont = boost::assign::list_of(new program_generator());

void process_options(int argc, char * argv[])
{
	namespace po = boost::program_options;
	// Declare the supported options.
	po::options_description desc("Allowed options");
	desc.add_options()
		("help", "produce help message")
		("in_dir", po::value<std::string>(), "input directory with files to load")
		("out_dir", po::value<std::string>(), "output directory where to store generated files")
		;

	po::variables_map vm;
	po::store(po::parse_command_line(argc, argv, desc), vm);
	po::notify(vm);    

	in_dir_path.clear();
	out_dir_path.clear();
	if (vm.count("help")) {
		std::cout << desc << "\n";
		return;
	}	
	if (vm.count("in_dir"))
	{
		in_dir_path = vm["in_dir"].as<std::string>();
		printLog(eDebug, eDebugLogLevel, str(boost::format("Options: set in_dir='%1%'") % in_dir_path));
	}
	if (vm.count("out_dir"))
	{
		out_dir_path = vm["out_dir"].as<std::string>();
		printLog(eDebug, eDebugLogLevel, str(boost::format("Options: set out_dir='%1%'") % out_dir_path));
	}
}

int main(int argc, char * argv[])
{
	process_options(argc, argv);
	if (in_dir_path.empty() || out_dir_path.empty())
		return -1;
	printLog(eDebug, eInfoLogLevel, "Generators processing started");
	for(abstract_generator * generator : generator_cont)
	{
		generator->load(in_dir_path);
		generator->save(out_dir_path);
	}
	printLog(eDebug, eInfoLogLevel, "Generators processing finished");
	return 0;
}