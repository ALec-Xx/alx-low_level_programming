#include <stdio.h>

/**
 * main - print integer from 0 to 10
 *
 * Description: return the required result
 *
 * Return: return integer 0
*/
int main(void)
{
	int i;

	i = 0;
	while (i <= 9)
	{
		printf("%d", i);
		i++;
	}
	printf("\n");

	return (0);
}
