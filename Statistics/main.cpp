#include <iostream>
#include <cassert>

#include "Statistics.h"

int main() {
    assert(calculateAccuracy(3, 4) == 75);
    assert(calculateAccuracy(1, 2) == 50);
    assert(calculateAccuracy(13, 13) == 100);
    assert(calculateAccuracy(21, 173) == 12);
    assert(calculateAccuracy(0, 0) == 0);

    std::cout << "All accuracy tests passed" << std::endl;

    return 0;
}