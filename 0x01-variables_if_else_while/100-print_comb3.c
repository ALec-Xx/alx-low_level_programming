#include <stdio.h>

/**
 * main - prints all possible combinations of two different digits,
 * in ascending order, separated by a comma followed by a space.
 * Return: return integer 0
*/
int main(void)
{
	int i, j;

	for (i = 0; i <= 8; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			putchar('0' + i);
			putchar('0' + j);

			if (i == 8 && j == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
