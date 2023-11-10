#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers.
 * @argc: number of command line args
 * @argv: array of command lin args
 * Return: 0(Success)
 */
int main(int argc, char *argv[])
{
	int count, mul = 0;

	if (argc == 3)
	{
		count = 1;

		while (count < argc)
		{
			mul = atoi(argv[count]) * atoi(argv[count + 1]);
			printf("%d\n", mul);
			return (0);
		}
	}
	else if (argc > 3 || argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
