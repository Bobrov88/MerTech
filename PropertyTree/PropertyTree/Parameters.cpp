#pragma once
#include "Parameters.h"

ParameterValues::ParameterValues() {
	model.push_back("Model");
	model.push_back("������");
	model.push_back("Number");
	model.push_back("500");

	userPassword.push_back("UserPassword");
	userPassword.push_back("������ ������������ �� ���������");
	userPassword.push_back("String");
	userPassword.push_back("");

	port.push_back("Port");
	port.push_back("����� �����");
	port.push_back("Number");
	port.push_back("0");

	comFile.push_back("ComFile");
	comFile.push_back("����");
	comFile.push_back("Number");
	comFile.push_back("1");

	baudRate.push_back("BaudRate");
	baudRate.push_back("��������");
	baudRate.push_back("Number");
	baudRate.push_back("115200");

	IPAddress.push_back("IPAddress");
	IPAddress.push_back("IP-�����");
	IPAddress.push_back("String");
	IPAddress.push_back("192.168.1.10");

	IPPort.push_back("IPPort");
	IPPort.push_back("IP-����");
	IPPort.push_back("Number");
	IPPort.push_back("5005");

	ofdChannel.push_back("OfdChannel");
	ofdChannel.push_back("����� ���");
	ofdChannel.push_back("Number");
	ofdChannel.push_back("2");
}

ParameterValues::~ParameterValues() {}