#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers,
 * followed by a new line.
 * @a: first argument
 * @n: second argument
 * Return: 0
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;

	while (i < n)
	{
		if (i == 0)
			printf("%d", a[i]);
		else if (i > 0)
			printf(", %d", a[i]);
		i++;
	}
	printf("\n");
}
