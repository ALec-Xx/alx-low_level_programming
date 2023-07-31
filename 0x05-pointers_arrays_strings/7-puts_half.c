#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: string argument
 * Return: 0
 */
void puts_half(char *str)
{
	int n, length_of_string;

	length_of_string = 0;

	while (str[length_of_string] != '\0')
		length_of_string++;

	for (n = length_of_string / 2; str[n] != '\0'; n++)
		_putchar(str[n]);
	_putchar('\n');
}
