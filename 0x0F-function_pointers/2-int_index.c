#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: pointer to array
 * @size: number of elements in array
 * @cmp: pointer to function
 * Return: first element index, on success or -1 on exit
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0 && cmp != NULL && array != NULL)
		while (i < size)
		{
			if (cmp(array[i]) != 0)
				return (i);
			i++;
		}
	else
		return (-1);

	return (-1);
}	
