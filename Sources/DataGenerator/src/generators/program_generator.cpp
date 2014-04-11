#include <generators/program_generator.h>
#include <proto_obj/program.pb.h>
#include <boost/property_tree/xml_parser.hpp>


void program_generator::load(const std::string & filename)
{
	using boost::property_tree::ptree;
	read_xml(filename, tree);



}

void program_generator::save()
{

}
