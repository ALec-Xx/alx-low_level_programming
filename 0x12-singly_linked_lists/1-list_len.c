#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: first node of list
 * Description: returns result
 * Return: returns the number of elements in a linked list_t list
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}

	return (i);
}
