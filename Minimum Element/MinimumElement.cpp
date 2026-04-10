#include "MinimumElement.h"



int findSmallestElement(int arr[], int size)
{
	// Set smallest to first arr element
    int smallest = arr[0];

    // Loop through all arr elements 
    for (int i = 1; i < size; i++)
    {
        // Check if current element is smaller than smallest
        if (arr[i] < smallest)
        {
			//Set smallest to current element
            smallest = arr[i];
        }
    }

    return smallest;
}