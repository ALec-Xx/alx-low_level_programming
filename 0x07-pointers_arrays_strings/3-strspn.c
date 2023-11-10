#include "main.h"
#include <stddef.h>

/**
 * _strspn - gets the length of a prefix substring.
 * @s: parameter accepts string
 * @accept: accepts string also
 * Return: returns the number of bytes in the initial
 * segment of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	i = 0;

	if (s == NULL || accept == NULL)
		return (i);

	while (s[i])
	{
		j = 0;

		while (accept[j] != s[i])
		{
			if (accept[j] == '\0')
				return (i);
			j++;
		}
		i++;
	}

	return (i);
}
