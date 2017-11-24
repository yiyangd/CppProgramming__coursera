//
//  elf.hpp
//  A2
//
//  Created by 董亦杨 on 2017/11/23.
//  Copyright © 2017年 董亦杨. All rights reserved.
//

#ifndef elf_hpp
#define elf_hpp

#include "creature.h"
using namespace std;

class Elf: public Creature
{
public:
    Elf();
    Elf(int newStrength, int newHit);
    virtual string getSpecies();
    virtual int getDamage();
};

#endif /* elf_hpp */
