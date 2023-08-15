#include <stdio.h>

#define MYFILE __FILE__

/**
 * main - prints the name of the file it was compiled from,
 * followed by a new line.
 * Description: prints name of file
 * Return: 0
 */
int main(void)
{
	printf("%s\n", MYFILE);

	return (0);
}
