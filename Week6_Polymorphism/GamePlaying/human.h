//
//  human.hpp
//  A2
//
//  Created by 董亦杨 on 2017/11/23.
//  Copyright © 2017年 董亦杨. All rights reserved.
//

#ifndef HUMAN_H
#define HUMAN_H


#include "creature.h"

using namespace std;

class Human: public Creature
{
public:
    Human();
    Human(int newStrength, int newHit);
    virtual string getSpecies();
    virtual int getDamage();
};

#endif /* human_hpp */
