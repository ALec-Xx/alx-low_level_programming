#include "main.h"

/**
 * *_strncat - a function that concatenates two strings.
 * @dest: first argument
 * @src: second argument
 * @n: maximum number of bytes
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
	int len;
	char *ptr;

	len = 0;

	while (dest[len] != '\0')
		len++;

	ptr = dest + len;

	while (*src != '\0' && n--)
		*ptr++ = *src++;
	*ptr = '\0';

	return (dest);
}
