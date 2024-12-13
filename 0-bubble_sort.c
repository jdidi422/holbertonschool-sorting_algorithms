#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending order using Bubble Sort.
 * @array: Pointer to the array to be sorted.
 * @size: Size of the array.
 *
 * This function sorts an array using the bubble sort algorithm. It repeatedly
 * steps through the list, compares adjacent pairs of elements, and swaps them
 * if they are in the wrong order. The process is repeated until the array is sorted.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp;
	int swapped;

	
	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		swapped = 0;


		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				swapped = 1;

			
				print_array(array, size);
			}
		}

	
		if (!swapped)
			break;
	}
}

