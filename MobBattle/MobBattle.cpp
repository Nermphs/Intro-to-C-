#include "MobBattle.h"

#include <iostream>
#include <cstdlib>

void battle(Mob& a, Mob& b)
{
	//Rolls value between 1 and 20 for each mob
    int rollA = rand() % 20 + 1;
    int rollB = rand() % 20 + 1;

	// Checks if rollA is less than or equal to A's attack skill
    if (rollA <= a.attackSkill)
    {
        // Applys dmg
        b.health -= a.damage;
		// Prints attack result
        std::cout << a.name << " hit " << b.name
            << " for " << a.damage << " damage!\n";
    }
    else
    {
        // Prints miss
        std::cout << a.name << " missed!\n";
    }

	// Same thing but for mob b
    if (rollB <= b.attackSkill)
    {
        a.health -= b.damage;
        std::cout << b.name << " hit " << a.name
            << " for " << b.damage << " damage!\n";
    }
    else
    {
        std::cout << b.name << " missed!\n";
    }
}