#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: argument containing array variable name
 * @n: number of elements of the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, tmp;

	i = 0;

	while (i < n / 2)
	{
		tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
		i++;
	}
}
