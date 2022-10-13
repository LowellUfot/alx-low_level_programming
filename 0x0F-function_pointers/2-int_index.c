#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: given array
 * @size: array size
 * @cmp: pointer function to compare
 *
 * Return: 0 or less for fail, otherwise for success
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}
	return (-1);
}
