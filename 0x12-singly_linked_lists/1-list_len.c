#include "lists.h"

/**
 *list_len - function that returns the number of elements in a linked list
 *@h: pointer to the head of a singly linked list
 *
 *Return: number of elements in a linked list
 */

size_t list_len(const list_t *h)
{
	size_t num_nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		num_nodes++;
	}

	return (num_nodes);
}
