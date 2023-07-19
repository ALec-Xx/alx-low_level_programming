#include "main.h"

/**
 * _isalpha - To check alphabetic characters
 * @c: value to be checked by the function
 * Description: checks for alphabetic characters
 * Return: return integer 0
 */
int _isalpha(int c)
{
	return ((c > 64 && c < 91) || (c > 96 && c < 123));
}
