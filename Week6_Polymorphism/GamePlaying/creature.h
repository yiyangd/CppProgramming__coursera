


#ifndef CREATURE_H
#define CREATURE_H

#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

class Creature
{
private:
    int strength;
    int hitpoints;
public:
    Creature();
    Creature(int newStrength, int newHit);
    virtual string getSpecies() = 0;
    virtual int getDamage();
    int getStrength();
    int getHitpoints();
    void getInjured(int damage);
};

#endif /* creature_hpp */
