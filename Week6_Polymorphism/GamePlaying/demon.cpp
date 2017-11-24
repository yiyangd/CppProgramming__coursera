//
//  demon.cpp
//  A2
//
//  Created by 董亦杨 on 2017/11/23.
//  Copyright © 2017年 董亦杨. All rights reserved.
//

#include "demon.h"
Demon:: Demon(): Creature(){}

Demon:: Demon(int newStrength, int newHit)
      : Creature(newStrength, newHit){}

int Demon::getDamage()
{
    int damage = Creature::getDamage();
    if ((rand() % 100) < 5)
    {
        damage += 50;
        cout << "Demonic attack inflicts 50 additional damage points!" << endl;
    }
    return damage;
}




