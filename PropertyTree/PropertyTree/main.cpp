#pragma once
#include "includes.h"

int main() {

	pt XMLTree;
	ItemsValues iValues;
	ParameterValues pValues;

	XMLTree.put("Settings.Page.<xmlattr>.Caption", "Параметры");
	{
		pt& node = XMLTree.add("Settings.Group","");
		XMLWriter::putXMLParameters(pValues.model, node);
		node.put("<xmlattr>.Caption", "Устройство");
	}
	{
		pt &node = XMLTree.put("Settings.Group.Parameter.ChoiceList", "");
		XMLWriter::putXMLItems(iValues.modelList, node);
		XMLTree.put_child("Settings.Group.Parameter.ChoiceList", node);
	}
	{
		pt node;
		XMLWriter::putXMLParameters(pValues.userPassword, node);
		XMLTree.add_child("Settings.Group", node);
	}
	write_xml("outXML.xml", XMLTree);
	return 0;
}