#include "lists.h"

/**
 *free_list - function that frees a linked list.
 *@head: pointer to the head of the linked list.
 *
 *Return: no return.
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
