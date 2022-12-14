#pragma once
#include "XMLWriter.h"

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
	auto& _node = node.add("Parameter", "");
	if (!pl[0].empty()) _node.put("<xmlattr>.Name", pl[0]);
	if (!pl[1].empty())	_node.put("<xmlattr>.Caption", pl[1]);
	if (!pl[2].empty())	_node.put("<xmlattr>.TypeValue", pl[2]);
	if (!pl[3].empty())	_node.put("<xmlattr>.DefaultValue", pl[3]);
}
