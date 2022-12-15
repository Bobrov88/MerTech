#pragma once
#include "XMLWriter.h"

XMLWriter::XMLWriter()
{
	ItemsValues iValues;
	ParameterValues pValues;

	XMLWriter::putXMLItems(iValues.modelList, choiceModel);
	XMLWriter::putXMLItems(iValues.portList, choicePort);
	XMLWriter::putXMLItems(iValues.comFileList, choiceComFile);
	XMLWriter::putXMLItems(iValues.baudRateList, choiceBaudRate);
	XMLWriter::putXMLItems(iValues.ofdChannelList, choiceOfdChannel);

	XMLWriter::putXMLParameters(pValues.model, paramModel);
	XMLWriter::putXMLParameters(pValues.userPassword, paramUserPassword);
	XMLWriter::putXMLParameters(pValues.port, paramPort);
	XMLWriter::putXMLParameters(pValues.comFile, paramComFile);
	XMLWriter::putXMLParameters(pValues.baudRate, paramBaudRate);
	XMLWriter::putXMLParameters(pValues.IPAddress, paramIPAddress);
	XMLWriter::putXMLParameters(pValues.IPPort, paramIPPort);
	XMLWriter::putXMLParameters(pValues.ofdChannel, paramOfdChannel);
}

XMLWriter::~XMLWriter() {}

void XMLWriter::putXMLItems(const ItemList& il, pt& node)
{
	node = node.put("ChoiceList", "");
	for (const auto& item : il) {
		auto& child = node.add("Item", item.second);
		child.put("<xmlattr>.Value", item.first);
	}
}

void XMLWriter::putXMLParameters(const ParamList& pl, pt& node)
{
	if (!pl[0].empty()) node.put("<xmlattr>.Name", pl[0]);
	if (!pl[1].empty())	node.put("<xmlattr>.Caption", pl[1]);
	if (!pl[2].empty())	node.put("<xmlattr>.TypeValue", pl[2]);
	if (!pl[3].empty())	node.put("<xmlattr>.DefaultValue", pl[3]);
}
