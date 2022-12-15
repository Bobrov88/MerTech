#pragma once
#include "items.h"

ItemsValues::ItemsValues()
{
	modelList.reserve(2);
	modelList.push_back({ 500, "Автоматически (НЕВА)" });
	modelList.push_back({ 93, "НЕВА-03-Ф" });

	portList.reserve(2);
	portList.push_back({ 0, "COM / VCOM" });
	portList.push_back({ 2, "TCP/IP" });

	comFileList.reserve(256);
	for (int i{ 1 }; i <= 256; ++i)
		comFileList.push_back({ i, "COM" + std::to_string(i)});

	baudRateList.reserve(11);
	baudRateList.push_back({ 1200, "1200 бод" });
	baudRateList.push_back({ 2400, "2400 бод" });
	baudRateList.push_back({ 4800, "4800 бод" });
	baudRateList.push_back({ 9600, "9600 бод" });
	baudRateList.push_back({ 19200, "19200 бод" });
	baudRateList.push_back({ 38400, "38400 бод" });
	baudRateList.push_back({ 57600, "57600 бод" });
	baudRateList.push_back({ 115200, "115200 бод" });
	baudRateList.push_back({ 230400, "230400 бод" });
	baudRateList.push_back({ 460800, "460800 бод" });
	baudRateList.push_back({ 921600, "921600 бод" });

	ofdChannelList.reserve(2);
	ofdChannelList.push_back({ 0, "Нет" });
	ofdChannelList.push_back({ 2, "Автоматически" });
}

ItemsValues::~ItemsValues() {};
