//
//  demon.hpp
//  A2
//
//  Created by 董亦杨 on 2017/11/23.
//  Copyright © 2017年 董亦杨. All rights reserved.
//

#ifndef DEMON_H
#define DEMON_H


#include "creature.h"

class Demon: public Creature
{
public:
    Demon();
    Demon(int newStrength, int newHit);
    virtual string getSpecies() = 0;
    virtual int getDamage();
};

#endif /* demon_hpp */
