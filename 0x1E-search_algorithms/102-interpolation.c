#include "search_algos.h"

/**
 * interpolation_search - searches for a value in array using
 *	interpolation search
 * @array: array to search value in
 * @size: size of array
 * @value: value to search for
 *
 * Return: first index where value is located
 *	return -1 if array is NULL or value is not found
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low, high, pos;

	if (!array || size == 0)
		return (-1);
	low = 0;
	high = size - 1;
	pos = low + (((double)(high - low) / (array[high] - array[low]
					)) * (value - array[low]));
	if (array[pos] == value)
		return (pos);
	if (array[pos] != value)
	{
		while (array[pos] != value && pos < size)
		{
			high = pos - 1;
			pos = low + (((double)(high - low) / (array[high] - array[low]
								)) * (value - array[low]));
			if (array[pos] == value)
				return (pos);
		} return (-1);
	}
	return (-1);
}
