#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: argument for string
 * Return: integer
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i += 1;
		s++;
	}
	return (i)
}
