#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: head node address
 * @idx: position at which node will be inserted
 * @n: value to be inserted
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node = *head, *newNode = NULL;
	unsigned int i;

	if (!head || !node)
		return (NULL);

	newNode = malloc(sizeof(listint_t));

	if (!newNode)
	{
		free(newNode);
		return (NULL);
	}

	for (i = 0; i < idx - 1 && node != NULL; i++)
	{
		if (idx == 0)
		{
			newNode->next = node;
			*head = newNode;
			return (*head);
		}
		node = node->next;
	}
	newNode->next = node->next;
	node->next = newNode;
	newNode->n = n;

	return (newNode);
}
