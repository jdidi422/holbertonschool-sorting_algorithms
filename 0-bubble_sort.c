#include "sort.h"
/**
 * bubble_sort - Sorts an array of integers in ascending order using Bubble Sort.
 * @array: Pointer to the array to be sorted.
 * @size: Size of the array.
 */

void bubble_sort(int *array, size_t size)
{

	size_t i, ln;
	int temp;
	int test = 1;

	if (!array || size < 2)
	{
		return;
	}

	ln = size;
	while (test)
	{
		test = 0;
		for (i = 1; i < ln; i++)
		{
			if (array[i - 1] > array[i])
			{
				temp = array[i - 1];
				array[i - 1] = array[i];
				array[i] = temp;
				test = 1;
				print_array(array, size);
			}
		}
		ln--;
	}
}

