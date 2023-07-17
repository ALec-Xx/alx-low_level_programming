#include <stdio.h>

/**
 * main - prints lower alphabet in reverse.
 *
 * Return: return integer 0
*/
int main(void)
{
	int i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
