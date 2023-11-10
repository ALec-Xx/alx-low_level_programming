#include "main.h"

/**
 * str_concat - concatenates two strings.
 * @s1: first parameter
 * @s2: second parameter
 * Return: char
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	ptr = malloc(sizeof(*s1) + sizeof(*s2));

	if (ptr == NULL)
		return (NULL);

	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}

	j = i;

	for (i = 0; s2[i] != '\0'; i++, j++)
		ptr[j] = s2[i];

	return (ptr);
}
