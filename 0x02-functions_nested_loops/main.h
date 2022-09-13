#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: the character to be written to stdout
 *
 * Return: 0 if successful
 */

int _putchar(char c)
{
	return(write(1, "_putchar\n", 9));
}
