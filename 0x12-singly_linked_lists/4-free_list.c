#include "lists.h"

/**
 *free_list - function that frees a linked list.
 *@head: pointer to the head of the linked list.
 *
 *Return: no return.
 */

void free_list(list_t *head)
{
	list_t *current_node;

	while (current_node != NULL)
	{
		current_node = head;
		head = head->next;
		free(current_node->str);
		free(current_node);
	}
}
