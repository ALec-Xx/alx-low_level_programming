#include "main.h"

/**
 * * _strcat - concatenates two strings
 * @dest: string to append to
 * @src: string to add
 * Return: a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int len;
	char *ptr = NULL;

	len = 0;

	while (dest[len] != '\0')
		len++;

	ptr = dest + len;

	while (*src != '\0')
		*ptr++ = *src++;
	*ptr = '\0';

	return (dest);
}
