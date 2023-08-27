#include "3-calc.h"
#include <stdio.h>

/**
 * main - performs simple arithmetic
 * @argc: number of arguments
 * @argv: value of arguments
 * Return: result int
 */
int main(int argc, char *argv[])
{
	int a, b, result;
	op_t ptr;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	ptr.f = get_op_func(argv[2]);

	if (ptr.f == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	result = ptr.f(a, b);

	printf("%d\n", result);

	return (0);
}
