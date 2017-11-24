//
//  human.cpp
//  A2
//
//  Created by 董亦杨 on 2017/11/23.
//  Copyright © 2017年 董亦杨. All rights reserved.
//

#include "human.h"

Human:: Human(): Creature(){}

Human:: Human(int newStrength, int newHit)
: Creature(newStrength, newHit){}

string Human:: getSpecies()
{
    return "Human";
}

int Human:: getDamage()
{
    int damage = Creature::getDamage();
    return damage;
}


