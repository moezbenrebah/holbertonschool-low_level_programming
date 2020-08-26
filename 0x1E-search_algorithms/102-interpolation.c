#include "search_algos.h"

/**
 * interpolation_search - function that searches for a value in a sorted array
 * @array: a pointer to the first element of the array to search in.
 * @size: the number of elements in array.
 * @value: the value to search for.
 *
 * Return:  return the first index where value is located, otherwise -1.
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low, high;

	if (!array)
		return (-1);

	low = 0;
	high = size - 1;
	size_t pos = low + (((double)(high - low) / (array[high] - array[low])) *
			(value - array[low]));

	if (pos >= size || pos + 1 < 1)
	{
		printf("Value checked array[%ld] is out of range\n", pos);
		return (-1);
	}

	while (pos < size)
	{
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		else if (array[pos] > value)
		{
			high = pos - 1;
			pos = low + (((double)(high - low) / (array[high] - array[low])) *
				(value - array[low]));
		}
		else if (array[pos] < value)
		{
			low = pos + 1;
			pos = low + (((double)(high - low) / (array[high] - array[low])) *
				(value - array[low]));
		}
	}
	return (-1);
}
