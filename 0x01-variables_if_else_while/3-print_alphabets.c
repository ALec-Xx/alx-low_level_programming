#include <stdio.h>\

/**
 * main - return the required output
 *
 * Description: print a to z in upper and lower
 *
 * Return: return integer value 0
*/
int main(void)
{
	int i, j;

	i = 'a';
	j = 'A';
	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	while (j <= 'Z')
	{
		putchar(j);
		j++;
	}
	putchar('\n');

	return (0);
}
