#include "search_algos.h"

/**
 * binary_search - a function to search for a given value in a gievn array.
 * @array: a pointer to the first element of the array to search in.
 * @size: the number of elements in array.
 * @value: the value to search for.
 *
 * Return: the value searched, otherwise -1.
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i, a, b;

	if (!array)
		return (-1);

	a = 0;
	b = size - 1;
	while (b >= a)
	{
		printf("Searching in array: ");
		for (i = a; i <= b; i++)
		{
			if (i != a)
				printf(", ");
			printf("%d", array[i]);
		}
		printf("\n");

		i = a + (b - a) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			b = i - 1;
		else
			a = i + 1;
	}

	return (-1);
}
