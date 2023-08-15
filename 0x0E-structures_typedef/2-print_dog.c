#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: pointer to struct dog
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (!d)
		printf("\n");

	if (d->name == NULL)
		printf("Name: (nil)\n");
	else if (!d->age)
		printf("Age: (nil)\n");
	else if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Name: %s\nAge: %0.6f\nOwner: %s\n", d->name, d->age,\
			d->owner);
}
