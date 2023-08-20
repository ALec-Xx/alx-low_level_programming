#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * struct formatter - A new struct type defining a formatter.
 * @specifier: A symbol representing a data type.
 * @print: A function pointer to a function that prints
 * a data type corresponding to symbol.
 */
typedef struct formatter
{
	char *specifier;
	void (*print)(va_list *ap);
} formatter;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);


void print_int(va_list *);
void print_char(va_list *);
void print_str(va_list *);
void print_float(va_list *);

#endif
