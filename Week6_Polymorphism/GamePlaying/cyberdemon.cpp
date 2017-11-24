//
//  cyberdemon.cpp
//  A2
//
//  Created by 董亦杨 on 2017/11/23.
//  Copyright © 2017年 董亦杨. All rights reserved.
//

#include "cyberdemon.h"

Cyberdemon:: Cyberdemon(): Demon(){}

Cyberdemon:: Cyberdemon(int newStrength, int newHit)
           : Demon(newStrength, newHit){}

string Cyberdemon:: getSpecies()
{
    return "Cyberdemon";
}

int Cyberdemon:: getDamage()
{

    int damage = Demon::getDamage();
    return damage;
}
