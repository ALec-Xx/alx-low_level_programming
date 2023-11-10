#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to head pointer
 * @idx: index to insert new node
 * @n: data to be inserted
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int len = 0;
	dlistint_t *node = *h, *newNode;

	while (node)
	{
		node = node->next;
		len++;
	}
	if (idx > len)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	else if (idx == len)
		return (add_dnodeint_end(h, n));

	newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	
	node = *h;

	while (--idx)
	{
		node = node->next;
		if (!node)
		{
			free(newNode);
			return (NULL);
		}
	}
	newNode->next = node->next;
	newNode->prev = node;

	if (node->next != NULL)
		node->next->prev = newNode;
	node->next = newNode;

	return (newNode);
}
