#include "lists.h"

/**
 *get_nodeint_at_index - function that returns the nth node of a linked list
 *@head: Pointer to the first node in the linked list
 *@index: The index of the node to return
 *
 *Return: Pointer to the node at the specified index,
 *	or NULL if index is invalid.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *temp = head;

	while (temp && count < index)
	{
		temp = temp->next;
		count++;
	}

	return (temp ? temp : NULL);
}
