#include "dog.h"

/**
 * free_dog - frees memory allocated to dog
 * @d: pointer to dog
 * Return: void
 */
void free_dog(dog_t *d)
{
	dog_t *ptr = d;

	if (ptr)
	{
		if (*(*ptr).name)
			free((*ptr).name);
		if (*(*ptr).owner)
			free((*ptr).owner);

		free(ptr);
	}
}
