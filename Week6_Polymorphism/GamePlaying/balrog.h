//
//  balrog.hpp
//  A2
//
//  Created by 董亦杨 on 2017/11/23.
//  Copyright © 2017年 董亦杨. All rights reserved.
//

#ifndef BALROG_H
#define BALROG_H

#include "demon.h"


class Balrog : public Demon
{
public:
    Balrog();
    Balrog(int newStrength, int newHit);
    virtual string getSpecies();
    virtual int getDamage();
};
#endif /* balrog_hpp */
