#include "lists.h"

/**
 * sum_listint - returns the sum of all the data
 * (n) of a listint_t linked list.
 * @head: head node
 * Return: 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);
	while (head)
	{
		if (!head)
			return (0);
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
