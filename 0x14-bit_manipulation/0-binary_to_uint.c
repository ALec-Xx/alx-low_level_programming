#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: the converted value, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0, i = 0, exp = 1;

	if (!b)
		return (0);

	while (b[i] != '\0')
		i++;

	while (i)
	{
		i--;
		if (b[i] != '0' && b[i] != '1')
			return (0);
		exp *= 2;
		if (b[i] & 1)
			decimal += exp;
	}

	return (decimal / 2);
}
