#include "search_algos.h"

/**
 * jump_search - a function to search for a given value in a given array
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: return the first index where value is located, otherwise -1
 */

int jump_search(int *array, size_t size, int value)
{

	size_t first, last, i, x = 0;

	if (!array)
		return (-1);

	first = 0;
	last = sqrt(size);

	while (first < size && array[first] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", first, array[first]);
		x = first;
		first = last;
		last += sqrt(size);
	}

	first = x;
	last = x + sqrt(size);
	printf("Value found between indexes [%ld] and [%ld]\n",
		first, last);

	for (i = first; i < size && i <= last; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}

	return (-1);
}
