#include "sort.h"

/**
 * bubble_sort -function to bubble sort an array and print iteration
 * @array: The array to be sorted
 * @size: The size of array
 * Return: Void
 *
 **/
void bubble_sort(int *array, size_t size)
{
	int n = 0, y = 0, tmp = 0, swaps_made = 1;

	if (array == NULL)
		return;

	for (n = size - 1; swaps_made; n--)
	{
		swaps_made = 0;
		for (y = 0; y < n; y++)
		{
			if (array[y] > array[y + 1])
			{
				swaps_made = 1;
				tmp = array[y];
				array[y] = array[y + 1];
				array[y + 1] = tmp;
				print_array(array, size);
			}
		}
	}
}
