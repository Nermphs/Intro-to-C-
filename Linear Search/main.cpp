#include <iostream>
#include <cassert>

#include "LinearSearch.h"

int main() {
    // Assign arr and size
    int arr[] = { 67,13,3,89,43,2,19,71,5,61,97,7,37,31,17,11,83,53,23,29 };
    int size = sizeof(arr) / sizeof(arr[0]);

    //Test Search
    assert(linearSearch(arr, size, 3) == 2);
    assert(linearSearch(arr, size, 7) == 11);
    assert(linearSearch(arr, size, 67) == 0);
    assert(linearSearch(arr, size, 88) == -1);

    std::cout << "All linear search tests passed\n";

    std::cout << "\n \n \n";

    // Setup variable for user input
    int linearSearchValue;

    while (true)
    {
        std::cout << "Enter a number to search (-1 to quit): ";
		//take user input for value to search for
        std::cin >> linearSearchValue;

		//Quit if user enters -1
        if (linearSearchValue == -1)
        {
            break;
        }

		//Search for user input value in arr
        int result = linearSearch(arr, size, linearSearchValue);

		//Check if value was found and print result
        if (result != -1)
        {
            std::cout << "Value found at index: " << result << "\n";
        }
        else
        {
            std::cout << "Value not found in array";
        }
    }

	return 0;
}