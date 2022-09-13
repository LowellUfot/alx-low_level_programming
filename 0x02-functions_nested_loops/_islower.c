#include "main.h"
#include <ctype.h>

/**
 * _islower.c - prints lowercase character
 *
 * Return: 1 if successful, 0 otherwise
 */

int _islower(int c)
{
	if (islower(c) == 1)
	{
		Return(1);
	}
	else
	{
		Return(0);
	}
}
