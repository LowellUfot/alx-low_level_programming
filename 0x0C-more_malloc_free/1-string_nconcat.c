#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: no. of bytes of s2 to concatenate
 * Return: pointer to concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *newstr;
	unsigned int len_newstr;
	unsigned int len1 = 0, len2 = 0, i = 0;

	while (*(s1 + len1) != '\0')
		len1++;

	while (*(s2 + len2) != '\0')
		len2++;
	/*determine length of the concatenated string*/
	if (n > len2)
		n = len2;
	len_newstr = len1 + n;

	newstr = malloc(len_newstr + 1); /* allocate memory */

	if (newstr == NULL)
		return (NULL); /*validate malloc return*/

	for (i = 0; i < len_newstr; i++)
	{
		if (i < len1)
			newstr[i] = s1[i];
		else
			newstr[i] = s2[i - len1];
	}
	newstr[i] = '\0';
	return (newstr);
}
