#include "search_algos.h"

int jump_search(int *array, size_t size, int value)
{

	size_t first, last, i;

	if (!array)
		return (-1);

	//length = sizeof(array) / sizeof(array[0]);
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
