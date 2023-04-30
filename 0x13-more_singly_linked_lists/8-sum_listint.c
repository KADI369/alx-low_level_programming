#include "lists.h"

/**
 *sum_listint - calculates the sum of all the integer data in a linked list.
 *@head: pointer to the first node in the linked list
 *
 *Return: the sum of all the data (n),
 *	otherwise if the list is empty, return 0.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
