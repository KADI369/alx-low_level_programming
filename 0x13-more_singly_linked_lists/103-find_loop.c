#include "lists.h"

/**
 *find_listint_loop - function that finds the loop in a linked list.
 *@head: pointer to the head of the list
 *
 *Return: The address of the node where the loop starts
 *	otherwise NULL if there is no loop.
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head, *fast = head;

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			slow = head;
			break;
		}
	}

	if (!slow || !fast || !fast->next)
		return (NULL);

	while (slow != fast)
	{
		slow = slow->next;
		fast = fast->next;
	}

	return (fast);
}
