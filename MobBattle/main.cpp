#include <iostream>
#include <cassert>
#include <cstdlib>
#include <ctime>

#include "MobBattle.h"

int main() {
	// Sets seed so random is different each time program is run
    srand(time(0)); 

    // Creates mobA and mobB with values
    Mob mobA = { "Orc", 100, 12, 20 };
    Mob mobB = { "Unicorn", 90, 15, 15 };

    // Sets round count
    int round = 1;

    //If both mobs have more than 0 health loop
    while (mobA.health > 0 && mobB.health > 0)
    {
		//print round count
        std::cout << "\n--- Round " << round << " ---\n";

        // Trigger Battle
        battle(mobA, mobB);

        // Print current health
        std::cout << mobA.name << " Health: " << mobA.health << "\n";
        std::cout << mobB.name << " Health: " << mobB.health << "\n";

		// Increment round count
        round++;
    }

    std::cout << "\n--- Battle Over ---\n";

    // Checks for draw
    if (mobA.health <= 0 && mobB.health <= 0)
    {
        std::cout << "It's a draw!\n";
    }
    // Checks if mobB wins
    else if (mobA.health <= 0)
    {
        std::cout << mobB.name << " wins!\n";
    }
	// Sets mobA as winner
    else
    {
        std::cout << mobA.name << " wins!\n";
    }

	return 0;
}