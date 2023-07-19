#include "main.h"

/**
 * _islower - Entry point
 * @c: value to be checked by the function
 * Description: (int c) checks output for lowercase alphabets
 * Return: 1 if lower case and 0 otherwise
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
