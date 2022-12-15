#pragma once
#include "includes.h"

typedef std::vector<std::pair<size_t, std::string>> ItemList;
typedef std::vector<std::string> ParamList;
typedef boost::property_tree::ptree pt;

class XMLWriter {
public:
	pt choiceModel;
	pt choicePort;
	pt choiceComFile;
	pt choiceBaudRate;
	pt choiceOfdChannel;

	pt paramModel;
	pt paramUserPassword;
	pt paramPort;
	pt paramComFile;
	pt paramBaudRate;
	pt paramIPAddress;
	pt paramIPPort;
	pt paramOfdChannel;

public:
	XMLWriter();
	~XMLWriter();

	static void putXMLItems(const ItemList& il,
		pt& XMLTree);
	static void putXMLParameters(const ParamList& pl,
		pt& XMLTree);
};
