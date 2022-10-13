#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - returns sum of two numbers
 * @a: number 1
 * @b: number 2
 *
 * Return: sum of aand b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns subtraction of two numbers
 * @a: num 1
 * @b: numb 2
 *
 * Return: a - b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns product of two mumbers
 * @a: num 1
 * @b: num 2
 *
 * Return: a * b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two numbers
 * @a: num 1
 * @b: num 2
 *
 * Return: a / b
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - returns modulos of dividing two numbers
 * @a: num 1
 * @b: num 2
 *
 * Return: a % b
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
