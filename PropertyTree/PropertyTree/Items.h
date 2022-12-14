#pragma once
#include "includes.h"

typedef std::vector<std::pair<size_t, std::string>> ItemList;

class ItemsValues {
public:
	ItemList modelList;
	ItemList portList;
	ItemList comFileList;
	ItemList baudRateList;
	ItemList ofdChannelList;
public:
	ItemsValues();
	~ItemsValues();
};
