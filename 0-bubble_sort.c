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
* bubble_sort - Sorts an array in ascending order
* @array: The array to sort
* @size: Size of the array to sort
*/

void bubble_sort(int *array, size_t size)
{
	size_t i = 0, len = size;
	int bub = 0;

	if (array == NULL || size < 2)
		return;

	while (bub == 0)
	{
		bub = 1;
		for (i = 0; i < len - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap(array + i, array + i + 1);
				print_array(array, size);
				bub = 0;
			}
		}
		len--;
	}
}
