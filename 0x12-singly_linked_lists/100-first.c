#include <stdio.h>

/**
 * print_story - prints a story before main
 * Return: none
 */

void_attribute_((constructor)) print_story()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
