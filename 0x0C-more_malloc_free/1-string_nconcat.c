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
	int len_newstr;
	int len1 = 0, len2 = 0, i = 0, j = 0;

	while (*(s1 + len1) != '\0')
		len1++;

	while (*(s2 + len2) != '\0')
		len2++;
	/*determine length of the concatenated string*/
	if (len2 > (int) n)
	{
		len_newstr = len1 + (int) n + 1;
	}
	else if ((int) n >= len2)
	{
		len_newstr = len1 + len2 + 1;
	}

	newstr = malloc(len_newstr); /* allocate memory */

	if (newstr == NULL)
		return (NULL); /*validate malloc return*/

	while (*(s1 + i) != '\0')
	{
		*(newstr + i) = *(s1 + i);
		i++;
	}

	while (i < (len_newstr - 1))
	{
		*(newstr + i) = *(s2 + j);
		i++;
		j++;
	}
	*(newstr + len_newstr) = '\0';
	return (newstr);
}
