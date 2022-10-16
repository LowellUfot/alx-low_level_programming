#include "dog.h"
#include <stdio.h>

/**
 * print_dog - function to print struct dog
 * @d: type struct dog
 *
 * Prints (nil) if d is NULL
 */

void print_dog(struct dog *d)
{
	if (!d)
		printf("(nil)\n");

	if (d)
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
