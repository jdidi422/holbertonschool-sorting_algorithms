#include "sort.h"


/**
 * swapp - Swaps two values in an array
 * @array: The array to sort
 * @a: Index of the first value
 * @b: Index of the second value
 * @size: The total number of elements in the array
 *
 * This function swaps the elements at indices `a` and `b` in the array.
 * After swapping, it prints the array using `print_array`.
 */
void swapp(int *array, int a, int b, int size)
{
	int temp;

	if (array[a] != array[b])
	{
		temp = array[a];
		array[a] = array[b];
		array[b] = temp;
		print_array(array, size);
	}
}

/**
 * partition - Partitions the array around a pivot
 * @array: The array to sort
 * @min: The left boundary of the partition
 * @max: The right boundary of the partition (pivot)
 * @size: The total number of elements in the array
 *
 * This function places all elements smaller than the pivot to the left
 * and all elements greater than the pivot to the right.
 * It returns the new index of the pivot.
 */
int partition(int *array, int min, int max, size_t size)
{
	int i = min, j, piv = array[max];

	for (j = min; j <= max; j++)
	{
		if (array[j] < piv)
		{
			swapp(array, i, j, size);
			i++;
	
    	}
	
    }
	swapp(array, i, max, size);

	return (i);
}

/**
 * q_sort - Recursive quick sort algorithm
 * @array: The array to sort
 * @min: The left boundary of the partition
 * @max: The right boundary of the partition
 * @size: The total number of elements in the array
 *
 * This function sorts the array recursively using the quick sort algorithm.
 */
void q_sort(int *array, int min, int max, size_t size)
{
	int i;

	if (min < max)
	{
		i = partition(array, min, max, size);
		q_sort(array, min, i - 1, size);
		q_sort(array, i + 1, max, size);
	}
}

/**
 * quick_sort - Main function for the quick sort algorithm
 * @array: The array to sort
 * @size: The total number of elements in the array
 *
 * This function initializes the quick sort process by calling `q_sort`.
 * If the array has fewer than 2 elements, no sorting is performed.
 */
void quick_sort(int *array, size_t size)
{
	if (size < 2)
		return;

	q_sort(array, 0, size - 1, size);
}
