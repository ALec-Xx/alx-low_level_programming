#include <stdio.h>

/**
 * main - prints all possible combinations of two-digit numbers,
 * ranging from 0-99, sepearated by a comma followed by a space.
 * Return: Always 0.
*/
int main(void)
{
	int i, j, k, l;

	for (i=0; i<=9; i++)
	{
		for (j=0; j<9; j++)
		{
			for (k=0; k<=9; k++)
			{
				for (l=1; l<=9; l++)
				{
					putchar('0' + i);
					putchar('0' + j);
					putchar(' ');
					putchar('0' + k);
					putchar('0' + l);
					if (i==9 && j==8 && k==9 && l==9)
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
