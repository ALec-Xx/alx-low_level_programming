#include "main.h"

/**
 * _abs - prints the absolute value of an integer
 * @n: the value to be checked by the function
 * Description: prints absolute value of a number
 * Return: returns integer value 0
 */
int _abs(int n)
{
	return (n * ((2 * n + 1) % 2));
}
