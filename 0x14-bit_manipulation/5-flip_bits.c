#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another
 * @n: base number
 * @m: number to transform to
 * Return: the number of bit transformations needed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count = 0, flip;

	flip = n ^ m;

	if (flip == 0)
		return (count);

	while (flip > 0)
	{
		count++;
		flip &= (flip - 1);
	}

	return (count);
}
