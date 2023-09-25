#ifndef _SORT_H_
#define _SORT_H_

#include <stdlib.h>
#include <stdio.h>

/**
 * struct listint_s - doubly linked list node
 *
 * @n: integer stored in node
 * @prev: pointer to previous element on the list
 * @next: pointer to next element on the list
 *
 **/

typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
size_t partition(int *array, size_t start, size_t pivot, size_t size);
void sort(int *array, size_t start, size_t end, size_t size);
void swap(int *a, int *b);
void shell_sort(int *array, size_t size);
void _swap(listint_t *currentNode, listint_t *nodeAfter, listint_t **oList);
void cocktail_sort_list(listint_t **list);
void counting_sort(int *array, size_t size);
void merge_sort(int *array, size_t size);
void print(int *array, char *order, size_t left, size_t right);
void merge_rec(int *array, int *tmp, size_t left, size_t right);
void heap(int *array, size_t size, size_t last);
void swap_heap(int *array, size_t a, size_t b);
void child(int *array, size_t size, size_t last, size_t max);
void max_heap(int *array, size_t size);
void heap_sort(int *array, size_t size);
void csort(int *array, size_t size, int div);
void radix_sort(int *array, size_t size);
int partition_hoare(int *array, int low, int high, size_t size);
void quicksort_hoare(int *array, int low, int high, size_t size);
void quick_sort_hoare(int *array, size_t size);

#endif /**SORT_HEADER**/
