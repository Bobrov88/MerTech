#pragma once
#include "includes.h"

typedef std::vector<std::string> ParamList;
typedef boost::property_tree::ptree pt;

class ParameterValues {
public:
	ParamList model = { "Model",
								"Модель",
								"Number",
								"500" };
	ParamList userPassword = { "UserPassword",
								"Пароль пользователя по умолчанию",
								"String",
								"" };
	ParamList port = { "Port",
							"Канал связи",
							"Number",
							"0" };
	ParamList comFile = { "ComFile",
							"Порт",
							"Number",
							"1" };
	ParamList baudRate = { "BaudRate",
							"Скорость",
							"Number",
							"115200" };
	ParamList IPAddress = { "IPAdress",
							"IP-адрес",
							"String",
							"192.168.1.10" };
	ParamList IPPort = { "IPPort",
							"IP-порт",
							"Number",
							"5005" };
	ParamList ofdChannel = { "OfdChannel",
							"Канал ОДФ",
							"Number",
							"2@" };
public:
	ParameterValues();
	~ParameterValues();
};