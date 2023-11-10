#include "function_pointers.h"


/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array.
 * @array: pointer to array of numbers
 * @size: number of elements in array
 * @action: pointer to function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (!array || !action)
		return;
	while (array != NULL && i < size)
	{
		action(array[i]);
		i++;
	}
}
