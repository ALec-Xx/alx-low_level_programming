#include "main.h"

/**
 * *string_nconcat - concatenates two strings.
 * @s1: string to append
 * @s2: string to concatenate to s1
 * @n: unsigned int
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t i, j;
	char *ptr;

	ptr = malloc(sizeof(*s1) + sizeof(char) * n);

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	if (!ptr)
	{
		free(ptr);
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];

	for (j = 0; j < n && s2[j] != '\0'; j++)
		ptr[i++] = s2[j];

	ptr[i] = '\0';

	return (ptr);
}
