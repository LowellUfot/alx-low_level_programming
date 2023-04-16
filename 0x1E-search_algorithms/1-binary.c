#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array using binary_serch
 * @array: array to search value in
 * @size: size of the sorted array
 * @value: value to search for in array
 *
 * Return: index where value is located.
 *	If value is not present or array is NULL, return -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t lo, hi, mid, i;

	if (!array)
		return (-1);

	lo = 0;
	hi = size - 1;

	while (lo < hi)
	{
		mid = lo + (hi - lo) / 2;
		printf("Searching in array: ");
		for (i = lo; i <= hi;  i++)
		{
			printf("%d", array[i]);
			if (i < hi)
				printf(", ");
		}
		printf("\n");
		if (array[mid] < value)
		{
			lo = mid + 1;
		}
		else
		{
			hi = mid - 1;
		}
	}
	if (array[lo] == value)
	{
		return (lo);
	}
	else
	{
		return (-1);
	}
}
