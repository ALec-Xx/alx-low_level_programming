#include "lists.h"


size_t print_listint_safe(const listint_t *head)
{
	int nodes;

	if (!head)
		exit(98);
	while (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nodes++;
	}
	printf("-> [%p] %d\n", (void *)head, head->n);
	return (nodes);
}
