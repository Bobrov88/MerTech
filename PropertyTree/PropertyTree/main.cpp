#pragma once
#include "includes.h"

int main() {
	XMLWriter subXML;
	pt group1;
	{
		group1.add_child("Parameter", subXML.paramModel)
			.add_child("ChoiceList", subXML.choiceModel);
		group1.add_child("Parameter", subXML.paramUserPassword);
	}
	pt group2;
	{
		group2.add_child("Parameter", subXML.paramPort)
			.add_child("ChoiceList", subXML.choicePort);
		group2.add_child("Parameter", subXML.paramComFile)
			.add_child("ChoiceList", subXML.choiceComFile);
		group2.add_child("Parameter", subXML.paramBaudRate)
			.add_child("ChoiceList", subXML.choiceBaudRate);
		group2.add_child("Parameter", subXML.paramIPAddress);
		group2.add_child("Parameter", subXML.paramIPPort);
		group2.add_child("Parameter", subXML.paramOfdChannel)
			.add_child("ChoiceList", subXML.choiceOfdChannel);
	}
	pt mainXML;
	{
		auto& node = mainXML.put("Settings.Page", "");
		node.put("<xmlattr>.Caption", "Параметры");
		node.add_child("Group", group1)
			.add("<xmlattr>.Caption", "Устройство");
		node.add_child("Group", group2)
			.add("<xmlattr>.Caption", "Параметры подключения к ККТ");
	}
		write_xml("outXML.xml", mainXML);
		return 0;
	}