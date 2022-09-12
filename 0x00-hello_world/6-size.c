#include <stdio.h>

/**
 * main - Program starts here
 *
 * Return: Always 0 for success
 */

int main(void)
{
	double i;

	printf("Size of a char: %d byte(s)\n", (int)sizeof(char));
	printf("Size of an int: %d bytes(s)\n", (int)sizeof(int));
	printf("Size of a long int: %d byte(s)\n", (int)sizeof(long int));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(i));
	printf("Size of a float: %d byte(s)\n", (int)sizeof(float));
	return (0);
}
