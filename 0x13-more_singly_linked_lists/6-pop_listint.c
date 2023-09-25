#include "lists.h"

/**
 *pop_listint - deletes the head node of a linked list,
 *@head: double pointer to the first element in the linked list
 *
 *Return: the head node’s data (n),
 *	otherwise if the linked list is empty return 0
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (!head || !*head)
		return (0);

	data = (*head)->n;

	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (data);

}
