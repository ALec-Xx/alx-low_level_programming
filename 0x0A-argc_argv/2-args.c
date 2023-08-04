#include <stdio.h>

/**
 * main - prints all arguments it receives.
 * @argc: number of command line arguments
 * @argv: array containing command line args
 * Return: 0(Success)
 */
int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);

	return (0);
}
