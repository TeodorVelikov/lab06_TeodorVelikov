// IceCreamOrder.h
// Written for CS32 W19.

#pragma once

#include <vector>
#include <string>
#include "IceCreamItem.h"

class IceCreamOrder {
public:
	std::string printBill() const;
	void addItem(IceCreamItem* item);
private:
	std::vector<IceCreamItem*> items;
};


