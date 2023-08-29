#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: first node or head node address
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		if (!h)
			return (0);
		if (h->n)
		{
			printf("%d\n", h->n);
			i++;
		}
		h = h->next;
	}
	return (i);
}
