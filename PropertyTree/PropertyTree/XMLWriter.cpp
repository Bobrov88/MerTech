#pragma once
#include "XMLWriter.h"

void XMLWriter::putXMLItems(const ItemList& il, pt& node)
{
	for (const auto& item : il) {
		auto& child = node.add("Item", item.second);
		child.put("<xmlattr>.Value", item.first);
	}
}

void XMLWriter::putXMLParameters(const ParamList& pl, pt& node)
{
	auto &_node = node.add("Parameter", "");
	_node.put("<xmlattr>.Name", pl[0]);
	_node.put("<xmlattr>.Caption", pl[1]);
	_node.put("<xmlattr>.TypeValue", pl[2]);
	_node.put("<xmlattr>.DefaultValue", pl[3]);
}
