#include "lists.h"
#include <string.h>

/**
 * *add_node - adds a new node at the beginning of a list_t list.
 * @head: head node
 * @str: string to function
 * Description: adds new node
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *tmp;
	unsigned int len = 0;


	if (!head || !str)
		return (NULL);

	while (str[len] != '\0')
		len++;

	tmp = *head;

	tmp = malloc(sizeof(list_t));

	if (!tmp)
	{
		free(tmp);
		return (NULL);
	}

	tmp->str = strdup(str);
	tmp->len = len;
	tmp->next = *head;
	*head = tmp;

	return (tmp);
}
