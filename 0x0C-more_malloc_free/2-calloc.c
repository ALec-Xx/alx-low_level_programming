#include "main.h"

/**
 * *_calloc - allocates memory for an array, using malloc.
 * @nmemb: number of elements in array
 * @size: size of each element
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (size == 0 || nmemb == 0)
		return (NULL);

	*ptr = 0;

	return (ptr);
}
