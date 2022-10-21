#include <stdio.h>

/**
 * print_story - prints a story before main
 * Return: none
 */

void __attribute__((constructor)) print_story()
{
		printf("You're beat! and yet, you must allow");
		printf(",\nI bore my house upon my back!\n");
}
