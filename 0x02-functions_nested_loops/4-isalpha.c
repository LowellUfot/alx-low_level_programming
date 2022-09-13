#include "main.h"
#include <ctype.h>

/**
 * _isalpha - prints lowercase character
 * @c: integer argument
 *
 * Return: 1 if successful, 0 otherwise
 */

int _isalpha(int c)
{
	if (isalpha(c) > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
