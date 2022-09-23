include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 *
 * Return: concatenated string address
 */

char *_strcat(char *dest, char *src)
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
