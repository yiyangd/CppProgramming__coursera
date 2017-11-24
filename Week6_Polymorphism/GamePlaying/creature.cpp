


#include "creature.h"

Creature:: Creature(): strength(10), hitpoints(10){}

Creature:: Creature(int newStrength, int newHit)
         : strength(newStrength), hitpoints(newHit){}


int Creature:: getStrength()
{
    return strength;
}
int Creature:: getHitpoints()
{
    return hitpoints;
}

int Creature:: getDamage()
{
    int damage;
    damage = (rand() % strength) + 1;
    cout << getSpecies() << " attacks for " << damage << " points!" << endl;
    return damage;
    
}
void Creature::getInjured(int damage)
{
    hitpoints -= damage;
}


