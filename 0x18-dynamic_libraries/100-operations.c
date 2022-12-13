#include <stdio.h>

/**
 * add - adds two integers
 * @int1: integer 1
 * @int2: integer 2
 *
 * Return: sum of two integers
 */

int add(int int1, int int2)
{
	return (int1 + int2);
}

/**
 * sub - subtracts int2 from int1
 * @int1: integer 1
 * @int2: integer 2
 *
 * Return: int1 - int2
 */
int sub(int int1, int int2)
{
	return (int1 - int2);
}

/**
 * mul - product of int1 and int2
 * @int1: integer 1
 * @int2: integer 2
 *
 * Return: int1 * int2
 */
int mul(int int1, int int2)
{
	return (int1 *int2);
}

/**
 * div - division of int1 by int2
 * @int1: integer 1
 * @int2: integer 2
 *
 * Return: int1/int2 without remainder
 */
int div(int int1, int int2)
{
	return (int1 / int2);
}

/**
 * mod - modulus of int1/int2
 * @int1: integer 1
 * @int2: integer 2
 *
 * Return: remainder of int1/int2
 */
int mod(int int1, int int2)
{
	return (int1 % int2);
}
