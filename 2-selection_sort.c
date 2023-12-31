#include "sort.h"



/**
 * selection_sort - function to sort an array using selection sort method
 * @array: the array to be sorted
 * @size: size of the array
 * Return: void
 *
 **/

void selection_sort(int *array, size_t size)
{
	size_t itr = 0, j, min, tmp;

	for (itr = 0; itr < size - 1; itr++)
	{
		min = itr;
		for (j = itr + 1; j < size; j++)
		{
			if (array[j] < array[min])
				min = j;
		}
		if (min == itr)
			continue;
		tmp = array[itr];
		array[itr] = array[min];
		array[min] = tmp;
		print_array(array, size);
	}
}
