#pragma once
#include "includes.h"

typedef std::vector<std::string> ParamList;
typedef boost::property_tree::ptree pt;

class ParameterValues {
public:
	ParamList model;
	ParamList userPassword;
	ParamList port;
	ParamList comFile;
	ParamList baudRate;
	ParamList IPAddress;
	ParamList IPPort;
	ParamList ofdChannel;
public:
	ParameterValues();
	~ParameterValues();
};