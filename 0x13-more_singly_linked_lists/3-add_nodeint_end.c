#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: head node
 * @n: integer data or value to be added
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr = malloc(sizeof(listint_t)), *node;

	if (!ptr)
	{
		free(ptr);
		return (NULL);
	}
	ptr->n = n;
	node = *head;
	ptr->next = NULL;

	if (!*head)
	{
		*head = ptr;
		return (NULL);
	}
	while (node->next)
		node = node->next;

	node->next = ptr;

	return (ptr);
}
