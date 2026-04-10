#include <iostream>


#include "PrintArray.h"

int main() {
	//Prints Array
	int arr[] = { 3, 1, 4, 1, 5, 9, 2, 6, 5, 3 };

	int size = sizeof(arr) / sizeof(arr[0]);

	printArray(arr, size);

	return 0;

}
	

