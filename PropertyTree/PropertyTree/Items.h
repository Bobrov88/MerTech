#pragma once
#include "includes.h"

typedef std::vector<std::pair<size_t, std::string>> ItemList;

class ItemsValues {
public:
	ItemList modelList = { {500,"Автоматически (НЕВА)"},
							{93, "НЕВА-03-Ф"} };
	ItemList portList = { {0,"COM / VCOM"},
							{2, "TCP/IP"} };
	ItemList comFileList;
	ItemList baudRateList = { {1200, "1200 бод"},
								{2400, "2400 бод"},
								{4800, "4800 бод"},
								{9600, "9600 бод"},
								{19200, "19200 бод"},
								{38400, "38400 бод"},
								{57600, "57600 бод"},
								{115200, "115200 бод"},
								{230400, "230400 бод"},
								{460800, "460800 бод"},
								{921600, "921600 бод"} };
	ItemList ofdChannelList = { {0, "Нет"},
								{2, "Автоматически"} };
public:
	ItemsValues();
	~ItemsValues();
};
