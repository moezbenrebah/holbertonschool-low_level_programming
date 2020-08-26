#include "search_algos.h"

/**
 * inter - a function that recursively searches for a value
 * in a sorted array of integers using the Interpolation search algorithm
 * @array: the array
 * @low: first index
 * @high: last index
 * @size: size of the array
 * @value: value to search for
 * Return: index of value or -1
 */
int inter(int *array, size_t low, size_t high, size_t size, int value)
{
	size_t pos;
	int x;

	pos = low + (((double)(high - low) / (array[high] - array[low])) *
			(value - array[low]));
	if (pos >= size)
	{
		printf("Value checked array[%ld] is out of range\n", pos);
		return (-1);
	}
	printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
	if (value == array[pos])
		return (pos);
	else if (value > array[pos])
		x = inter(array, pos + 1, high, size, value);
	else if (value < array[pos])
		x = inter(array, low, pos - 1, size, value);
	return (x);
}

/**
 * interpolation_search - a function that searches for a value
 * in a sorted array of integers using the Interpolation search algorithm
 * @array: the array
 * @size: size of the array
 * @value: value to search for
 * Return: index of value or -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	if (!array)
		return (-1);
	return (inter(array, 0, size - 1, size, value));
}
