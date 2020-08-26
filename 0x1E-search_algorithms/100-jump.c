#include "search_algos.h"

/**
 * jump_search - a function to search for a given value in a given array
 * @arry: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: return the first index where value is located, otherwise -1
 */

int jump_search(int *array, size_t size, int value)
{

	size_t first, last, i;

	if (!array)
		return (-1);

	first = array[0];
	last = sqrt(size);

	while (array[last] <= value && last < size)
	{
		printf("Value checked array [%d] = [%ld]\n", array[first], first);
		first = last;
		last += sqrt(size);
		if (last > size - 1)
			last = size;
	}

	for (i = first; i < last; i++)
	{
		if (array[i] == value)
		{
			printf("Value found between indexes [%d] and [%d]\n",
				array[first], array[last]);
			return (i);
		}
		printf("Value checked array [%d] = [%ld]\n", array[first], first);
	}

	return (-1);
}
