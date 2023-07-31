#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: argument housing string
 * Return: 0
 */
void print_rev(char *s)
{
	int len;

	len = 0;

	while (s[len] != '\0')
		len++;
	len -= 1;

	while (len >= 0)
		_putchar(s[len--]);
	_putchar('\n');
}
