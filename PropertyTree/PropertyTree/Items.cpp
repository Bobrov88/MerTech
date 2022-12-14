#pragma once
#include "items.h"

ItemsValues::ItemsValues()
{
	modelList.reserve(2);
	modelList.push_back({ 500, "������������� (����)" });
	modelList.push_back({ 93, "����-03-�" });

	portList.reserve(2);
	portList.push_back({ 0, "COM / VCOM" });
	portList.push_back({ 2, "TCP/IP" });

	comFileList.reserve(256);
	//std::iota(
	//	comFileList.begin(),
	//	comFileList.end(),
	//	1);
	for (size_t i{ 1 }; i <= 256; ++i)
		comFileList.push_back({ i, "COM" + i });

	baudRateList.reserve(11);
	baudRateList.push_back({ 1200, "1200 ���" });
	baudRateList.push_back({ 2400, "2400 ���" });
	baudRateList.push_back({ 2400, "2400 ���" });
	baudRateList.push_back({ 2400, "2400 ���" });
	baudRateList.push_back({ 19200, "19200 ���" });
	baudRateList.push_back({ 38400, "38400 ���" });
	baudRateList.push_back({ 57600, "57600 ���" });
	baudRateList.push_back({ 115200, "115200 ���" });
	baudRateList.push_back({ 230400, "230400 ���" });
	baudRateList.push_back({ 460800, "460800 ���" });
	baudRateList.push_back({ 921600, "921600 ���" });

	ofdChannelList.reserve(2);
	ofdChannelList.push_back({ 0, "���" });
	ofdChannelList.push_back({ 2, "�������������" });
}

ItemsValues::~ItemsValues() {};
