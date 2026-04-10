#include <iostream>
#include <cassert>

#include "Pointers.h"

int main() {
    // Set ints
    int x = 10;
    int y = 20;

    // Swaps ints referencing the exact point in memory rather than copying the values
    swapInts(&x, &y);

	// Check if swap was successful
    assert(x == 20);
    assert(y == 10);

    std::cout << "Swap successful\n";
}