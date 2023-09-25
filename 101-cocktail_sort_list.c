#include "sort.h"

/**
 * _swap - swap current node
 * @currentNode: current node
 * @nodeAfter: next node
 * @oList: original list
 * Return: nothing void
 *
 **/
void _swap(listint_t *currentNode, listint_t *nodeAfter, listint_t **oList)
{
	listint_t *before, *after;

	if (currentNode == NULL || nodeAfter == NULL)
		return;

	before = currentNode->prev;
	after  = nodeAfter->next;

	if (before != NULL)
		before->next = nodeAfter;
	else
		*oList = nodeAfter;

	if (after != NULL)
		after->prev = currentNode;

	currentNode->next = after;
	currentNode->prev = nodeAfter;
	nodeAfter->next = currentNode;
	nodeAfter->prev = before;

	print_list(*oList);
}
/**
 * cocktail_sort_list - function that sorts a doubly linked list of
 * integers in ascending order using the Cocktail shaker sort algorithm
 * @list: pointer to list to sort
 * Return: nothing void
 *
 **/
void cocktail_sort_list(listint_t **list)
{
	int swapped;
	listint_t *head = *list;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	do {
		swapped = 0;

		while (head->next != NULL)
		{
			if (head->n > head->next->n)
			{
				_swap(head, head->next, list);
				swapped = 1;
				continue;
			}
			head = head->next;
		}

		swapped = 0;
		head = head->prev;

		while (head->prev != NULL)
		{
			if (head->n < head->prev->n)
			{
				_swap(head->prev, head, list);
				swapped = 1;
				continue;
			}
			head = head->prev;
		}
		head = head->next;
	} while (swapped == 1);
}
