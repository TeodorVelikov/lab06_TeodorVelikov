//
//  PreMadeItem.h
//  lab06
//
//  Created by Theo Velikov on 5/16/19.
//  Copyright © 2019 Theo Velikov. All rights reserved.
//

#pragma once
#include <iostream>
#include <string>
#include "IceCreamItem.h"

class PreMadeItem : public IceCreamItem {
public:
    PreMadeItem(std::string name, std::string size);
    virtual ~PreMadeItem();
    
    virtual std::string composeItem() override;
    virtual double getPrice() override;
    
protected:
    std::string Pname;
    
};


