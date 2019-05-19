//
//  IceCreamItem.cpp
//  lab06
//
//  Created by Theo Velikov on 5/18/19.
//  Copyright © 2019 Theo Velikov. All rights reserved.
//

#include "IceCreamItem.h"
#include <string>

IceCreamItem::IceCreamItem(std::string size) {
    this->size = size;
    if(size == "small") {
        price = 3.00;
    }
    else if (size == "medium") {
        price = 5.00;
    }
    else if (size == "large") {
        price = 6.50;
    }
}

double IceCreamItem::getPrice(){
    return price;
}

std::string IceCreamItem::composeItem() {
    std::string item;
    item = item + "Ice Cream Item: " + size + "\n" ;
    item = item + "Price: $" + std::to_string(price) + "\n";
    return item;
}
