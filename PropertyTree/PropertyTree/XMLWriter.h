#pragma once
#include "includes.h"

typedef std::vector<std::pair<size_t, std::string>> ItemList;
typedef std::vector<std::string> ParamList;
typedef boost::property_tree::ptree pt;

class XMLWriter {
public:
	static void putXMLItems(const ItemList& il,
		pt& XMLTree);
	static void putXMLParameters(const ParamList& pl,
		pt& XMLTree);
};
