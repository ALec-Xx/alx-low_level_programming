#include "main.h"
#include <stddef.h>

/**
 * *_strchr - locates a character in a string.
 * @s: parameter holding string
 * @c: characters in the string
 * Return: a pointer to the first occurrence of the
 * character c in the string s, or NULL
 * if the character is not found
 */
char *_strchr(char *s, char c)
{
	char *ptr = NULL;

	if (s != NULL)
	{
		do {
			if (*s == c)
			{
				ptr = s;
				break;
			}
		} while (*s++);
	}

	return (ptr);
}
