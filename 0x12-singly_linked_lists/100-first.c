#include <stdio.h>

/**
 * print_story - prints a story before main
 * Return: none
 */

void print_story(void) __attribute__((constructor))
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
