//
//  elf.cpp
//  A2
//
//  Created by 董亦杨 on 2017/11/23.
//  Copyright © 2017年 董亦杨. All rights reserved.
//

#include "elf.h"

Elf:: Elf(): Creature(){}

Elf:: Elf(int newStrength, int newHit)
    : Creature(newStrength, newHit){}

string Elf:: getSpecies()
{
    return "Elf";
}

int Elf:: getDamage()
{

    int damage = Creature::getDamage();
    if ((rand() % 10) == 0 )
    {
        cout << "Magical attack inflicts " << damage
             << "additional damage points!" << endl;
        damage *= 2;
    }
    return damage;
}
