#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc
 * @b: unsigned int
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		free(ptr);
		exit(98);
	}

	return (ptr);
}
