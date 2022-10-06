#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates array and initialise with char c
 * @size: array size
 * @c: character to initialise array
 *
 * Return: pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *ch;
	int i = 0;

	if (size <= 0)
		return (NULL);

	ch = malloc(size * sizeof(char));

	/*validate malloc return*/
	if (ch == NULL)
		return (NULL);

	/*set array values to char c*/
	while (i < (int)size)
	{
		*(ch + i) = c;
		i++;
	}
	*(ch + i) = '\0';
	return (ch);
}
