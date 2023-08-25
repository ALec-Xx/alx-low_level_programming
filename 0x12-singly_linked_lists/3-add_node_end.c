#include "lists.h"

/**
 * *add_node_end - adds a new node at the end of a list_t list
 * @str: string passed to function
 * @head: first node in list
 * Description: adds new node at end of list
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp, *node;
	unsigned int len = 0;


	while (str[len] != '\0')
		len++;

	tmp = malloc(sizeof(list_t));
	tmp->str = strdup(str);
	tmp->len = len;

	if (!tmp)
	{
		free(tmp);
		return (NULL);
	}

	node = *head;

	tmp->next = NULL;

	if (!head || !*head || !str)
	{
		*head = tmp;
		return (NULL);
	}
	while (node->next)
		node = node->next;

	node->next = tmp;

	return (tmp);
}
