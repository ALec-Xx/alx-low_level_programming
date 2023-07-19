#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: return integer 0
*/
int main(void)
{
	char phrase[] = "_putchar";
	int i;

	for (i = 0; phrase[i] != '\0'; i++)
		_putchar(phrase[i]);
	_putchar('\n');
	return (0);
}
