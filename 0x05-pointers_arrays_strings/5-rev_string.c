#include "main.h"

/**
 * rev_string - a function that reverses a string.
 * @s: argument containing string
 * Return: 0
 */
void rev_string(char *s)
{
	int i, len;
	char *str_begin, *str_end, temp;

	for (len = 0; s[len] != '\0'; len++)
		;

	str_begin = s;
	str_end = s + (len - 1);

	for (i = 0; i < (len - 1) / 2; i++)
	{
		temp = *str_end;
		*str_end = *str_begin;
		*str_begin = temp;

		str_begin++;
		str_end--;
	}
}
