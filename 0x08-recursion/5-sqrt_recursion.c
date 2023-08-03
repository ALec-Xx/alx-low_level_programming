#include "main.h"


int _sqrt_recursion(int n)
{
	int x = 0;

	if (n <= 0)
		return (-1);

	if ((n > 0) && (n / x) == x)
		return (x);
	_sqrt_recursion(0);

}
