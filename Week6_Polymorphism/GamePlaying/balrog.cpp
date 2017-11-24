//
//  balrog.cpp
//  A2
//
//  Created by 董亦杨 on 2017/11/23.
//  Copyright © 2017年 董亦杨. All rights reserved.
//

#include "balrog.h"


Balrog:: Balrog(): Demon(){}

Balrog:: Balrog(int newStrength, int newHit)
       : Demon(newStrength, newHit){}

string Balrog:: getSpecies()
{
    return "Balrog";
}

int Balrog:: getDamage()
{

    int damage = Demon::getDamage();
    int damage2 = (rand() % getStrength()) + 1;
    cout << "Balrog speed attack inflicts " << damage2 << "additional damage points!" << endl;
    damage += damage2;
    return damage;
}
