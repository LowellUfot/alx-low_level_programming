#include "main.h"
#include <ctype.h>

/**
 * _islower - prints lowercase character
 * @c: integer argument
 *
 * Return: 1 if successful, 0 otherwise
 */

int _islower(int c)
{
	if (islower(c) > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
