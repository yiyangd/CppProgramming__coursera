//
//  main.cpp
//  A2
//
//  Created by 董亦杨 on 2017/11/23.
//  Copyright © 2017年 董亦杨. All rights reserved.
//

#include "creature.h"
#include "human.h"
#include "demon.h"
#include "elf.h"
#include "cyberdemon.h"
#include "balrog.h"

using namespace std;

void battleArena(Creature &creature1, Creature &creature2)
{

    while(creature2.getHitpoints() > 0 && creature1.getHitpoints() > 0)
    {
        creature2.getInjured(creature1.getDamage());
        cout << creature2.getSpecies() << " left " << creature2.getHitpoints() << endl;
        creature1.getInjured(creature2.getDamage());
        cout << creature1.getSpecies() << " left " << creature1.getHitpoints() << endl;
    }
    
}
int main(int argc, const char * argv[]) {

    Human A(20,200);
    Cyberdemon B(50,50);
    battleArena(A, B);
    system("pause");
    return 0;
}
