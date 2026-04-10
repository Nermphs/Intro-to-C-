#include "Pointers.h"

void swapInts(int* a, int* b)
{
	// sets temp equal to the value at address a
    int temp = *a;
	//sets the value at address a to the value at address b
    *a = *b;
	// Sets the value at address b to temp
    *b = temp;
}