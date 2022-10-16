#include "dog.h"

/**
 * init_dog - function to initialise struct dog
 * @d: struct dog
 * @name: argument for name member
 * @owner: argument for owner member
 * @age: argument for age member
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->owner = owner;
	d->name = name;
	d->age = age;
}
