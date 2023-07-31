#include "main.h"

/**
 * *string_toupper - changes all lowercase letters
 * of a string to uppercase.
 * @s: argument containing string
 * Return: char
 */
char *string_toupper(char *s)
{
	for (; *s != '\0'; s++)
		*s = (*s >= 97 && *s <= 122) ? *s - 32 : *s;

	return (s);
}
