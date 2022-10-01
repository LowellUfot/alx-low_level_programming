#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: largest number of bytes to append
 *
 * Return: concatenated string address
 */

char *_strncat(char *dest, char *src, int n)
{
	int c, d;

	c = d = 0;
	while (*(dest + c))
	{
		c++;
	}
	while (d < n && *(src + d))
	{
		*(dest + c) = *(src + d);
		c++;
		d++;
	}
	if (d < n)
	{
		*(dest + c) = *(src + d);
	}
	return (dest);
}
