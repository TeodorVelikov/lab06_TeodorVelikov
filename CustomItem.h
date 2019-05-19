//
//  CustomItem.h
//  lab06
//
//  Created by Theo Velikov on 5/16/19.
//  Copyright © 2019 Theo Velikov. All rights reserved.
//

#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "IceCreamItem.h"


class CustomItem : public IceCreamItem {

public:
    CustomItem(std::string size);
    virtual ~CustomItem();
    void addTopping(std::string topping);
    std::string getTops();
    
    virtual std::string composeItem() override;
    virtual double getPrice() override;
    
protected:
    struct tops{
        std::string type;
        int oz;
    };
    std::vector<tops> toppings;
    
    
};

