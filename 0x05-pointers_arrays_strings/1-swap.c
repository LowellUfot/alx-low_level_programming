#include "main.h"

/**
 * swap_int - swaps the values of int a andd int b
 * @int a: int a to be swapped
 * @int b: int to be swapped
 *
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int j;

	j = *a;
	*a = *b;
	*b = j;
}
