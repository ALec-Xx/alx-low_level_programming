#include <stdio.h>

/**
 * main - a program that prints the number of
 * arguments passed into it.
 * @argc: stores number of arguments
 * @argv: stores the string args
 * Return: 0(Success)
 */
int main(int argc, char __attribute__((__unused__)) **argv)
{
	printf("%d\n", argc - 1);

	return (0);
}
