#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: head node
 * @index: index o the nth node o listint_t linked list
 * Return: NULL if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	for (i = 0; head != NULL; i++)
	{
		if (!head)
			return (NULL);
		if (i == index)
			return (head);
		head = head->next;
	}
	return (NULL);
}
