#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * index of a listint_t linked list.
 * @head: head node
 * @index: position of node to delete
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node = *head, *deleteNode = NULL;
	unsigned int i;

	if (!head || !node)
		return (-1);
	if (index == 0)
	{
		node = (*head)->next;
		free(*head);
		*head = node;
		return (1);
	}
	else
	{
		for (i = 0; i < index - 1 && head != NULL; i++)
			node = node->next;
		deleteNode = node->next;
		node->next = node->next->next;
		deleteNode->next = NULL;

		free(deleteNode);
	}

	return (1);
}
