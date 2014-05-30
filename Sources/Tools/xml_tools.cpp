#include <Tools/xml_tools.h>
#include <Tools/loggers.h>
#include <boost/foreach.hpp>
#include <boost/algorithm/string.hpp>
#include <algorithm> 
#include <functional> 
#include <cctype>
#include <locale>
using boost::property_tree::ptree;

void display_int(const int depth, const ptree& tree) {
	BOOST_FOREACH(ptree::value_type const&v, tree.get_child("")) {
		ptree subtree = v.second;
		std::string nodestr = tree.get<std::string>(v.first);
		boost::algorithm::trim(nodestr);

		// print current node  
		std::string entry = std::string("").assign(depth * 2, ' ');
		entry += v.first;
		if (nodestr.length() > 0) {
			entry += " = ";
			entry += tree.get<std::string>(v.first);
		}
		printLog(eDebug, eDebugLogLevel, entry);
		// recursive go down the hierarchy  
		display_int(depth + 1, subtree);
	}
};

void display(const int depth, const ptree& tree) {
	printLog(eDebug, eDebugLogLevel, "-----");
	display_int(depth, tree);
}

// trim from start
inline std::string &ltrim(std::string &s) {
	s.erase(s.begin(), std::find_if(s.begin(), s.end(), std::not1(std::ptr_fun<int, int>(std::isspace))));
	return s;
}

// trim from end
inline std::string &rtrim(std::string &s) {
	s.erase(std::find_if(s.rbegin(), s.rend(), std::not1(std::ptr_fun<int, int>(std::isspace))).base(), s.end());
	return s;
}

// trim from both ends
inline std::string &trim(std::string &s) {
	return ltrim(rtrim(s));
}
