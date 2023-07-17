#include <stdio.h>

/**
 * main - return alphabets expect e and q
 *
 * Description: print the required results
 *
 * Return: integer value 0
*/
int main(void)
{
	int i;

	i = 'a';
	while (i <= 'z')
	{
		if (i != 'e' && i != 'q')
		{
			putchar(i);
		}
		i++;
	}
	putchar('\n');

	return (0);
}
