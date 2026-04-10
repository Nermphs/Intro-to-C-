#include "Statistics.h"
#include <cassert>

int calculateAccuracy(int hits, int shots)
{
	// Checks if values are valid
    assert(hits >= 0);
    assert(shots >= 0);
    assert(hits <= shots);

	//checks if shots is 0
    if (shots == 0)
    {
        return 0;
    }

	//calculates accuracy as a percentage
    int accuracy = (hits * 100) / shots;

    return accuracy;
}