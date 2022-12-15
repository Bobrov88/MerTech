#pragma once
#include "includes.h"

int main() {
	XMLWriter subXML;
	pt group1;
	{
		group1.add_child("Parameter", subXML.paramModel)
			.add_child("ChoiceList", subXML.choiceModel);
	}

	write_xml("outXML.xml", group1);
	return 0;
}