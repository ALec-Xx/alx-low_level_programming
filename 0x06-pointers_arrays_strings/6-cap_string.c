#include "main.h"

/**
 * *cap_string - capitalizes the first characters of a string.
 * @s: argunent holding string
 * Return: char
 */
char *cap_string(char *s)
{
	while (*s)
	{
		switch (*s)
		{
			case ' ':
			case '\n':
			case '\t':
			case ',':
			case '.':
			case ';':
			case '!':
			case '?':
			case '"':
			case '(':
			case ')':
			case '{':
			case '}':

			*(s + 1) = (*(s + 1) >= 97 && *(s + 1) <= 122) ? *(s + 1) - 32 : *(s + 1);
		}
		s++;
	}
	return (s);
}
