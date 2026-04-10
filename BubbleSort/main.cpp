#include <iostream>
#include <cassert>

#include "BubbleSort.h"
#include "BinarySearch.h"

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

    // Binary search tests
    assert(binarySearch(arr, size, 11) == 4);
    assert(binarySearch(arr, size, 23) == 8);
    assert(binarySearch(arr, size, 97) == 19);
    assert(binarySearch(arr, size, 88) == -1);

    std::cout << "All tests passed!\n";

    // User input
    int target;

    while (true)
    {
		// Take user input for target
        std::cout << "Enter value to search (-1 to quit): ";
        std::cin >> target;

		// Quit if user enters -1
        if (target == -1)
        {
            break;
        }

		// Search for target in arr return index or -1 if not found
        int result = binarySearch(arr, size, target);

        if (result != -1)
        {
            std::cout << "Found at index: " << result << "\n";
        }
        else
        {
            std::cout << "Value not found.\n";
        }
    }

    return 0;

}