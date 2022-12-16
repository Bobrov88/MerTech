#pragma once
#include "items.h"

ItemsValues::ItemsValues()
{
	comFileList.reserve(256);
	for (int i{ 1 }; i <= 256; ++i)
		comFileList.push_back({ i, "COM" + std::to_string(i)});
}

ItemsValues::~ItemsValues() {};
