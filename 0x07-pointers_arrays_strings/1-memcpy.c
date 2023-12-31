#include "main.h"

/**
 * *_memcpy - copies memory area.
 * @dest: parameter to store values from src variable
 * @src: value to be copied
 * @n: max size of bytes in memory
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
