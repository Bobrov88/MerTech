#pragma once
#include <iostream>
#include <vector>
#include <numeric>

typedef std::vector<std::pair<size_t, std::string>> ItemList;

class ItemsValues {
	ItemList modelList;
	ItemList portList;
	ItemList comFileList;
	ItemList baudRateList;
	ItemList ofdChannelList;
public:
	ItemsValues();
	~ItemsValues();
};
