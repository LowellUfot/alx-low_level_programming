#include "main.h"

/**
 * print_chessboard - prints chessboard
 * @a: char pointer
 * @8: column count
 */

void print_chessboard(char (*a)[8])
{
	unsigned int i, j;

	for (i = 0; *(a + i) != '\0'; i++)
	{
		if (i % 8 == 0 && i != 0)
		{
			j = 1;
			_putchar('\n');
		}
		_putchar(a[i / 8][i - j]);
	}
	_putchar('\n');
}
