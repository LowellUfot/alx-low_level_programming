#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: number of unit of bytes to allocate
 *
 * Return: pointer to allocated memory
 * exits with status 98 if process fails
 */

void *malloc_checked(unsigned int b)
{
	void *var;

	/*var = malloc(sizeof(var) * b); //allocate memory*/
	var = malloc(b);

	/*validate malloc return*/
	if (var == NULL)
		exit(98);

	return (var);
}
