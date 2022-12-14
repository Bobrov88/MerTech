#pragma once
#include <iostream>
#include <vector>
#include <numeric>
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/xml_parser.hpp>
#include <boost/foreach.hpp>
#include "Items.h"
#include "XMLWriter.h"
#include "Parameters.h"

typedef std::vector<std::pair<size_t, std::string>> ItemList;
typedef std::vector<std::string> ParamList;
typedef boost::property_tree::ptree pt;
using namespace boost::property_tree::xml_parser;
