#pragma once
#include "includes.h"

int main() {
	ItemsValues iValues;
	ParameterValues pValues;

	pt choiceModel;
	XMLWriter::putXMLItems(iValues.modelList, choiceModel);
	pt choicePort;
	XMLWriter::putXMLItems(iValues.portList, choicePort);
	pt choiceComFile;
	XMLWriter::putXMLItems(iValues.comFileList, choiceComFile);
	pt choiceBaudRate;
	XMLWriter::putXMLItems(iValues.baudRateList, choiceBaudRate);
	pt choiceOfdChannel;
	XMLWriter::putXMLItems(iValues.ofdChannelList, choiceOfdChannel);

	pt param

		/*pt XMLTree;
	pt node;


	XMLTree.put("Settings.Page.<xmlattr>.Caption", "Параметры");
	{
		pt& node = XMLTree.add("Settings.Group", "");
		XMLWriter::putXMLParameters(pValues.model, node);
		node.put("<xmlattr>.Caption", "Устройство");
	}
	{
		pt& node = XMLTree.put("Settings.Group.Parameter.ChoiceList", "");
		XMLWriter::putXMLItems(iValues.modelList, node);
		XMLTree.put_child("Settings.Group.Parameter.ChoiceList", node);
	}
	{
		pt node;
		XMLWriter::putXMLParameters(pValues.userPassword, node);
		XMLTree.add_child("Settings.Group", node);
	}
	{
		pt& node = XMLTree.add("Settings.Group", "");
		XMLWriter::putXMLParameters(pValues.port, node);
		node.put("<xmlattr>.Caption", "Параметры подключения к ККТ");
		auto & _param = node;
		_param.put("ChoiceList", "");
		XMLWriter::putXMLItems(iValues.portList, _param);
		_param.put_child("ChoiceList", _param);
	}*/


	//write_xml("outXML.xml", Main);
	return 0;
}