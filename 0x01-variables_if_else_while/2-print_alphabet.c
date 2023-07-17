#include <stdio.h>

/**
 * main - all codes
 *
 * Description: prints alphabets in lowercase followed by newline
 *
 * Return: return integer value 0
*/
int main(void)
{
	char i;

	i = 'a';
	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	putchar('\n');

	return (0);
}
