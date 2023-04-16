#include "search_algos.h"

/**
 * jump_search - searches for a value in array using jump search algorithm
 * @array: array to search through
 * @size: size of array
 * @value: value to search for
 *
 * Return: first index of value in array
 *	return -1 if array is NULL or if value is not present
 *
 */

int jump_search(int *array, size_t size, int value)
{
	size_t lo, hi, i;
	int j_step;

	if (!array)
		return (-1);
	j_step = sqrt(size);
	lo = 0;
	hi = j_step;

	while (hi < size)
	{
		printf("Value checked array[%ld] = [%d]\n", lo, array[lo]);
		printf("Value checked array[%ld] = [%d]\n", hi, array[hi]);
		if (array[lo] > value || array[hi] >= value)
		{
			printf("Value found between indixes [%d] and [%d]\n", array[lo], array[hi]);
			for (i = lo; i <= hi; i++)
			{
				printf("Value checked array[%ld] = [%d]\n", i, array[i]);
				if (array[i] == value)
					return (i);
			} return (-1);
		}
		else
		{
			lo = hi;
			hi += j_step;
		}
	}
	for (i = lo; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
