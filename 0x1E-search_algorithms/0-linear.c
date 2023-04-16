#include "search_algos.h"

/**
 * linear_search - searches for value in array using Linear Search algo.
 * @array: array to search through
 * @size: size of the array
 * @value: value to search for
 *
 * Return: first index of value in array or -1 if not present in array
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for  (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
