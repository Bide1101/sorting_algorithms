#include "sort.h"

/**
* swap - swaps 2 integers
* @x: first integer
* @y: second integer
*/

void swap(int *x, int *y)
{
	int s = *x;
	*x = *y;
	*y = s;
}

/**
* selection_sort - Sorts an array of ints in ascending order
* by making use of the selection sort algorithm
* @array: An array of ints
* @size: Size of the array
*/

void selection_sort(int *array, size_t size)
{
	size_t i, j, min_index = 0;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min_index = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_index])
				min_index = j;
		}

		if (min_index != i)
		{
			swap(&array[i], &array[min_index]);
			print_array(array, size);
		}
	}
}
