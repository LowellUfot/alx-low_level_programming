#include <unistd.h>

/**
 *_putchar - prints characters to stdout
 * @ch: character pointer
 *
 * Return: 1 if successful
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
