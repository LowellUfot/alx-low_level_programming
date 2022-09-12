#include <stdio.h>

/**
 * main - peogram starts here
 *
 * Return: 0 always.
 */

int main(void)
{
	double i;

	printf("Size of a char: %i byte(s)\n", (int)sizeof(char));
	printf("Size of an int: %i bytes(s)\n", (int)sizeof(int));
	printf("Size of a long int: %i byte(s)\n", (int)sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(i));
	printf("Size of a float: %i byte(s)", (int)sizeof(float));

	return (0);
}
