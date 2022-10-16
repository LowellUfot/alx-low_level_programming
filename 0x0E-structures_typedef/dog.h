#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct called dog with name, owmner, and age members
 * @name: dog name member
 * @owner: dog owner member
 * @age: dog age member
 *
 * Description: struct for dog
 */

struct dog
{
	char *owner;
	char *name;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
