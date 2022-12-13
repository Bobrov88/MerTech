#include "Items.h"
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/xml_parser.hpp>
#include <boost/foreach.hpp>

typedef boost::property_tree::ptree pt;
using namespace boost::property_tree::xml_parser;

int main() {
	auto clv{ std::make_unique<ItemsValues>() };
	pt XMLTree;
	XMLTree.put("Settings.Page", "")
		.put("<xmlattr>.Caption", "Параметры");
	XMLTree.put("Settings.Group", "")
		.put("<xmlattr>.Caption", "Устройство");
	pt _child;
	_child.put("Parameters", "");
		_child.add("<xmlattr>.Name", "Model");
		_child.add("<xmlattr>.Caption", "Модель");
		_child.add("<xmlattr>.TypeValue", "Number");
		_child.add("<xmlattr>.DefaultValue", "500");
	XMLTree.add_child("Settings.Group.Parameters", _child);
	boost::property_tree::xml_parser::write_xml("outXML.xml", XMLTree);
	return 0;
}