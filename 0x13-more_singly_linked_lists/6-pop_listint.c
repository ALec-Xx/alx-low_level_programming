#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t
 * linked list, and returns the head node’s data (n).
 * @head: head node
 * Return: returns the head node’s data (n) return 0 if empty
 */
int pop_listint(listint_t **head)
{
	listint_t *toDelete = *head;
	int nodeData;

	if (!head || !toDelete)
		return (0);

	*head = (*head)->next;
	nodeData = toDelete->n;
	free(toDelete);

	return (nodeData);
}
