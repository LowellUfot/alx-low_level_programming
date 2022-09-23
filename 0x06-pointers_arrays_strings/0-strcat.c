#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 *
 * Return: concatenated string address
 */

char *_strcat(char *dest, char *src)
{
	int a, b;

	a = b = 0;
	while (*(dest + a))
		a++;
	while ((*(dest + a) = *(src + b)))
	{
		a++;
		b++;
	}
	return (dest);
}
