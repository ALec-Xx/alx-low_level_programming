#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints natural numbers from n to 98
 * @n: the start of the range of numbers to be printed
 * Return: return range of numbers
 */
void print_to_98(int n)
{
	int i, j;

	if (n <= 98)
	{
		i = n;

		while (i <= 98)
		{
			if ( i != 98)
				printf("%d, ", i);
			else if (i == 98)
				printf("%d\n", i);
			i++;
		}
	} else if (n >= 98)
	{
		j = n;

		while (j >= 98)
		{
			if (j != 98)
				printf("%d, ", j);
			else if (j == 98)
				printf("%d\n", j);
			j--;
		}
	}
}
