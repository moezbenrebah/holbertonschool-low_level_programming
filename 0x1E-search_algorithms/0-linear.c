#include "search_algos.h"

/**
 * linear_search - a linear search algorithm to find a given value in an array.
 * @array: a pointer to the first element of the array to search in.
 * @size: the number of elements in array.
 * @value: the value to search for.
 *
 * Return: -1 if the value to search for is not found, otherwise the value.
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array || !(*array))
		return (-1);


	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
