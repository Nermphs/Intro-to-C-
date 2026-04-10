#include "LinearSearch.h"

// Searchers array for target
int linearSearch(int arr[], int size, int target)
{
    // Loops through all elements of the arr
    for (int i = 0; i < size; i++)
    {
        // Checks if cur element equals target
        // If true returns index
        if (arr[i] == target)
        {
            return i;
        }
    }

	//if target is not found in arr returns -1
    return -1;
}