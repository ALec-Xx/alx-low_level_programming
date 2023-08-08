#include "main.h"

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of string
 * @c: second parameter
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);

	if (arr == NULL || !c)
		return (NULL);

	while (i < size)
	{
		*(arr + i) = c;
		i++;
	}

	return (arr);
}
