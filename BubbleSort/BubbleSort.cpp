#include "BubbleSort.h"

void bubbleSort(int arr[], int size)
{
	// Loop through all elements of the arr
    for (int i = 0; i < size - 1; i++)
    {
		// Loop through unsorted elements of the arr
        for (int j = 0; j < size - 1 - i; j++)
        {
			// Check if current element is greater than next element
            if (arr[j] > arr[j + 1])
            {
				// Swap current element with next element
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}