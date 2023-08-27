#include "variadic_functions.h"

void print_str(va_list *ap);
void print_float(va_list *ap);
void print_char(va_list *ap);
void print_int(va_list *ap);


/**
 * print_char - prints character
 * @ap: variable argument pointing to char
 * Return: void
 */
void print_char(va_list *ap)
{
	printf("%c", va_arg(*ap, int));
}

/**
 * print_int - prints integer
 * @ap: variable argument pointing to integer
 * Return: void
 */
void print_int(va_list *ap)
{
	printf("%d", va_arg(*ap, int));
}

/**
 * print_float - prints float number
 * @ap: variable argumenr pointing to float
 * Return: void
 */
void print_float(va_list *ap)
{
	printf("%f", va_arg(*ap, double));
}

/**
 * print_str - prints string
 * @ap: variable argument pointing to string
 * Return: void
 */
void print_str(va_list *ap)
{
	char *str = va_arg(*ap, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * print_all - prints anything
 * @format: a string of characters representing the argument types
 * @...: variable arguments
 * Return: void
 */
void print_all(const char * const format, ...)
{
	formatter fms[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_str},
		{'\0', NULL}
	};
	va_list ap;
	int j = 0, m;
	const char *separator = "";

	va_start(ap, format);

	if (format == NULL)
		return;

	while (format[j] != '\0')
	{
		m = 0;

		while (fms[m].specifier != NULL)
		{
			if (*(fms[m].specifier) == format[j])
			{
				printf("%s", separator);
				fms[m].print(&ap);
				separator = ", ";
				break;
			}
			m++;
		}
		j++;
	}
	printf("\n");

	va_end(ap);
}
