#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * struct dog - a new type struct containing a few elements.
 * @name: name of the dog
 * @age: age of dog
 * @owner: name of dog owner
 * Description: struct dog
 **/
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
