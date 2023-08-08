#include "main.h"

/**
 * *_strdup - returns a pointer to a newly allocated
 * space in memory, which contains a copy of the
 * string given as a parameter.
 * @str: string
 * Return: pointer
 */
char *_strdup(char *str)
{
	char *ptr;
	int i;

	ptr = malloc(sizeof(*str));

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		ptr[i] = str[i];

	return (ptr);
}
