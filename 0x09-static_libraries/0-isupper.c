#include "main.h"

/**
 * _isupper - prints if c is upper char
 * @c: int c to check for
 *
 * Return: non-zero if successful
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
