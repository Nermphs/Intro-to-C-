#include <iostream>
#include <cassert>
#include "MinimumElement.h"


int main() {
	//find smallest element test
    int arr[] = { 67,13,3,89,43,2,19,71,5,61,97,7,37,31,17,11,83,53,23,29 };
    int size = sizeof(arr) / sizeof(arr[0]);

    int result = findSmallestElement(arr, size);

    assert(result == 2);

    std::cout << "All size tests passed. Smallest value is: " << result << std::endl;

    return 0;
}