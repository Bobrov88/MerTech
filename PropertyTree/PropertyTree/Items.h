#pragma once
#include "includes.h"

typedef std::vector<std::pair<size_t, std::string>> ItemList;

class ItemsValues {
public:
	ItemList modelList = { {500,"������������� (����)"},
							{93, "����-03-�"} };
	ItemList portList = { {0,"COM / VCOM"},
							{2, "TCP/IP"} };
	ItemList comFileList;
	ItemList baudRateList = { {1200, "1200 ���"},
								{2400, "2400 ���"},
								{4800, "4800 ���"},
								{9600, "9600 ���"},
								{19200, "19200 ���"},
								{38400, "38400 ���"},
								{57600, "57600 ���"},
								{115200, "115200 ���"},
								{230400, "230400 ���"},
								{460800, "460800 ���"},
								{921600, "921600 ���"} };
	ItemList ofdChannelList = { {0, "���"},
								{2, "�������������"} };
public:
	ItemsValues();
	~ItemsValues();
};
