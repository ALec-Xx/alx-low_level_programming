#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 * @...: variable arguments
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *ptr;

	va_start(args, n);

	for (i = 0; i < (n - 1); i++)
	{
		ptr = va_arg(args, char *);

		if (ptr == NULL)
			printf("nil");
		if (separator != NULL)
			printf("%s%c ", ptr, *separator);
	}
	printf("%s\n", va_arg(args, char *));

	va_end(args);
}
