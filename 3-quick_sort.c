#include "sort.h"



/**
 * quick_sort - function to quick sort an array using lomuto method
 * @array: the array to be sorted
 * @size: size of the array
 * Return: void
 *
 **/
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	sort(array, 0, size - 1, size);
}

/**
 * sort - function to call recursive and create new pivots
 * @array: The array to be sorted
 * @first: The beginning of sorting array
 * @last: The end of sorting array
 * @size: The size of array
 * Return: void
 *
 **/
void sort(int *array, size_t first, size_t last, size_t size)
{
	size_t pivot;

	if (last == 0 || last <= first)
		return;
	pivot = partition(array, first, last, size);
	if (pivot != 0 && pivot > first)
		sort(array, first, pivot - 1, size);
	if (pivot < size - 1)
		sort(array, pivot + 1, last, size);
}

/**
 * partition - function to partition array according to pivot
 * @array: The array to be partitioned
 * @first: The beginning of comparison index
 * @pivot: The partition index
 * @size: The size of array
 * Return: void
 *
 **/
size_t partition(int *array, size_t first, size_t pivot, size_t size)
{
	size_t a;

	for (a = first; a < pivot; a++)
	{
		if (array[a] < array[pivot])
		{
			if (a != first)
			{
				swap(&array[first], &array[a]);
				print_array(array, size);
			}
			first++;
		}
	}
	if (array[first] > array[pivot])
	{
		swap(&array[first], &array[pivot]);
		pivot = first;
		print_array(array, size);
	}
	return (pivot);
}

/**
 * swap - function to swap elements
 * @a: element 1
 * @b: element 2
 * Return: void
 *
 **/
void swap(int *a, int *b)
{
	int tmp = 0;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
