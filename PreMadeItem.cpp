//
//  PreMadeItem.cpp
//  lab06
//
//  Created by Theo Velikov on 5/16/19.
//  Copyright © 2019 Theo Velikov. All rights reserved.
//

#include <iostream>
#include <string>
#include "PreMadeItem.h"
#include "IceCreamItem.h"


PreMadeItem::PreMadeItem(std::string name, std::string size) : IceCreamItem(size) {
    Pname = name;
    price += 1.00;
}

PreMadeItem::~PreMadeItem() {
    
}

std::string PreMadeItem::composeItem() {
    std::string item;
    char buffer[50];
    sprintf(buffer, "%.2f", price);
    item = item + "Pre-made Size: " + size + "\n" ;
    item = item + "Pre-made Item: " + Pname + "\n";
    item = item + "Price: $" + buffer + "\n";
    return item;
}

double PreMadeItem::getPrice() {
    return price;
}
