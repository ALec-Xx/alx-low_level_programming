#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: parameter holding string
 * Return: int
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
		return (0);

	return (_strlen_recursion(s + (++i)) + 1);
}
