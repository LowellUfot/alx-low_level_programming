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
	while ((*(dest + c) = *(src + d)))
	{
		c++;
		d++;
	}
	return (dest);
}
