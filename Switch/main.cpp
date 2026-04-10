#include <iostream>
#include <cassert>

#include "Switch.h"

int main() {
	const Player testPlayer;

	// Health test
	Player healthResult = applyPotion(HEALTH, testPlayer);
	assert(healthResult.health == 100);
	assert(healthResult.speed == 10);
	assert(healthResult.strength == 15);
	assert(healthResult.magic == 30);

	// Speed test
	Player speedResult = applyPotion(SPEED, testPlayer);
	assert(speedResult.health == 20);
	assert(speedResult.speed == 50);
	assert(speedResult.strength == 5);
	assert(speedResult.magic == 10);

	// Strength test
	Player strengthResult = applyPotion(STRENGTH, testPlayer);
	assert(strengthResult.health == 60);
	assert(strengthResult.speed == 25);
	assert(strengthResult.strength == 200);
	assert(strengthResult.magic == 30);

	// Magic test
	Player magicResult = applyPotion(MAGIC, testPlayer);
	assert(magicResult.health == 30);
	assert(magicResult.speed == 10);
	assert(magicResult.strength == 10);
	assert(magicResult.magic == 100);

	std::cout << "All potion tests passed" << std::endl;

	return 0;
}
