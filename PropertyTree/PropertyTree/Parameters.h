#pragma once
#include "includes.h"

typedef std::vector<std::string> ParamList;
typedef boost::property_tree::ptree pt;

class ParameterValues {
public:
	ParamList model = { "Model",
								"������",
								"Number",
								"500" };
	ParamList userPassword = { "UserPassword",
								"������ ������������ �� ���������",
								"String",
								"" };
	ParamList port = { "Port",
							"����� �����",
							"Number",
							"0" };
	ParamList comFile = { "ComFile",
							"����",
							"Number",
							"1" };
	ParamList baudRate = { "BaudRate",
							"��������",
							"Number",
							"115200" };
	ParamList IPAddress = { "IPAdress",
							"IP-�����",
							"String",
							"192.168.1.10" };
	ParamList IPPort = { "IPPort",
							"IP-����",
							"Number",
							"5005" };
	ParamList ofdChannel = { "OfdChannel",
							"����� ���",
							"Number",
							"2@" };
public:
	ParameterValues();
	~ParameterValues();
};