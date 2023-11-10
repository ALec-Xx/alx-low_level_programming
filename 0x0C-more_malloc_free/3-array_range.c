#include "main.h"

/**
 * *array_range - creates an array of integers.
 * @min: first parameter
 * @max: second parameter
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *ptr, i;

	ptr = malloc(sizeof(int) * (max - min) + 1);

	if (min > max)
		return (NULL);

	if (!ptr)
	{
		free(ptr);
		return (NULL);
	}

	for (i = 0; min <= max; min++, i++)
		ptr[i] = min;

	return (ptr);
}
