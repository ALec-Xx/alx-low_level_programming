#include "main.h"

/**
 * _strcmp - compares two strings.
 * @s1: first argument
 * @s2: second argument
 * Return: integer less than, equal to, or greater than zero
 * if s1 (or the first n bytes thereof) is
 * found, respectively, to be less than, to match, or be greater than s2
 **/
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			break;
	}

	return (s1[i] - s2[i]);
}
