#include "dog.h"

/**
 * *new_dog - function that creates a new dog.
 * @name: pointer to to char names dog
 * @age: ages dog
 * @owner: pointer to the char owners dog
 * Return: type dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;
	int i = 0, j = 0, k;

	while (name[i] != '\0')
		i++;
	while (owner[j] != '\0')
		j++;

	new = malloc(sizeof(dog_t));

	if (!new)
	{
		free(new);
		return (NULL);
	}

	new->name = malloc(i * sizeof(new->name));

	if (!new->name)
	{
		free(new->name);
		free(new);
		return (NULL);
	}

	for (k = 0; k <= i; k++)
		new->name[k] = name[k];

	new->age = age;

	new->owner = malloc(j * sizeof(new->owner));

	if (!new->owner)
	{
		free(new->name);
		free(new->owner);
		free(new);
		return (NULL);
	}

	for (k = 0; k <= j; k++)
		new->owner[k] = owner[k];

	return (new);
}
