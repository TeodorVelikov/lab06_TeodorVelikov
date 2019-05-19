//
//  CustomItem.cpp
//  lab06
//
//  Created by Theo Velikov on 5/16/19.
//  Copyright © 2019 Theo Velikov. All rights reserved.
//

#include <iostream>
#include <string>
#include <sstream>
#include "CustomItem.h"
#include "IceCreamItem.h"

CustomItem::CustomItem(std::string size) : IceCreamItem(size) {}

CustomItem::~CustomItem() {
    
}

void CustomItem::addTopping(std::string topping) {
    for(int i = 0; i < toppings.size(); i++){
        if(toppings[i].type==topping){
            toppings[i].oz++;
            price+=.4;
            return;
        }
    }
    tops temp;
    temp.type=topping;
    temp.oz=1;
    toppings.push_back(temp);
    price+=.4;
}

std::string CustomItem::composeItem() {
    std::cout<< "in compose" <<std::endl;
    std::string item;
    char buffer[50];
    sprintf(buffer, "%.2f", price);
    std::string p = buffer;
    item = item + "Custom Size: " + size +"\n";
    item = item + "Toppings:\n";
    item = item + getTops();
    item = item + "Price: $" + buffer + "\n";
    return item;
}
std::string CustomItem::getTops() {
    std::string tops;
    for(int i = 0; i < toppings.size(); i++) {
        tops += toppings[i].type;
        tops += ": " + std::to_string(toppings[i].oz) + " oz\n";
    }
    return tops;
}

double CustomItem::getPrice() {
    return price;
}
