#include "main.h"

/**
 * *_strstr - locates a substring.
 * @haystack: parameter holding string
 * @needle: parameter holding substring
 * Return: returns a pointer to the beginning of the
 * located substring, or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; needle[i] != '\0'; i++)
	{
		for (j = 0; haystack[j] != '\0'; j++)
		{
			if (needle[i] == haystack[j])
				return (&haystack[j]);
		}
	}
	return ('\0');
}
