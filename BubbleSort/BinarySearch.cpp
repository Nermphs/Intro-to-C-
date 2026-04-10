#include "BinarySearch.h"

int binarySearch(int arr[], int size, int target)
{
	// Set left to the first index and right to the last index of the arr
    int left = 0;
    int right = size - 1;

	// Loops until target is found or left is greater/equal to right
    while (left <= right)
    {
        // Finds the mid of the arr
        int mid = (left + right) / 2;

		// if mid is target return mid index
        if (arr[mid] == target)
        {
            return mid;
        }
        // If mid is less than target set it to mid + 1
		// Check the right half of the arr
        else if (arr[mid] < target)
        {
            left = mid + 1;
        }
		// Do the opposite if mid is greater than target
        else
        {
            right = mid - 1;
        }
    }

    return -1;
}