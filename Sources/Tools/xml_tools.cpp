#include <Tools/xml_tools.h>
#include <Tools/loggers.h>
#include <boost/foreach.hpp>
#include <boost/algorithm/string.hpp>
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
