#include "sort.h"

/**
 * insertion_sort_list - function to sort doubly linked list in ascending order
 * @list: The doubly linked list
 *
 * Return: void
 *
 **/
void insertion_sort_list(listint_t **list)
{
	listint_t *current_node = NULL;

	if (list == NULL || *list == NULL)
		return;

	current_node = (*list)->next;

	for (; current_node != NULL; current_node = current_node->next)
	{
		while (current_node->prev != NULL &&
				current_node->n < current_node->prev->n)
		{
			current_node->prev->next = current_node->next;

			if (current_node->next != NULL)
				current_node->next->prev = current_node->prev;
			current_node->next = current_node->prev;
			current_node->prev = current_node->prev->prev;
			current_node->next->prev = current_node;

			if (current_node->prev == NULL)
				*list = current_node;
			else
				current_node->prev->next = current_node;
			print_list(*list);
		}
	}
}
