//
//  cyberdemon.hpp
//  A2
//
//  Created by 董亦杨 on 2017/11/23.
//  Copyright © 2017年 董亦杨. All rights reserved.
//

#ifndef CYBERDEMON_H
#define CYBERDEMON_H
#include "demon.h"
#include <iostream>
class Cyberdemon : public Demon
{
public:
    Cyberdemon();
    Cyberdemon(int newStrength, int newHit);
    virtual string getSpecies();
    virtual int getDamage();
};

#endif /* cyberdemon_hpp */
