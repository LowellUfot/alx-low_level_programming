#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - program starts here
 *
 * Return: 1 if the number is positive. 0 otherwise
 *
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int b;

	b = n % 10;
	if (b > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, b);
	}
	else if (n % 10 == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, b);
	}
	else if ((b < 6) && (b != 0))
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, b);
	}
	return (0);
}
