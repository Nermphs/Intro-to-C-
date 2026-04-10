#include <iostream>
#include <cassert>

#include "BubbleSort.h"

int main() {
	//Set arr and size
    int arr[] = { 67,13,3,89,43,2,19,71,5,61,97,7,37,31,17,11,83,53,23,29 };
    int size = sizeof(arr) / sizeof(arr[0]);

	//Sort arr
    bubbleSort(arr, size);

	//Check if arr is sorted correctly
    for (int i = 0; i < size - 1; i++)
    {
        assert(arr[i] <= arr[i + 1]);
    }

    std::cout << "Array is sorted correctly!\n";
}