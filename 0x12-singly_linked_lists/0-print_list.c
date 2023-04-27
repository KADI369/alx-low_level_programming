#include "lists.h"
#include <stdio.h>

/**
 *print_list - function that prints all the elements of a list.
 *@h: pointer to the head of a singly linked list
 *
 *Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t num_nodes = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		num_nodes++;
	}

	return (num_nodes);
}
