#include "search_algos.h"

/**
 * linear_search - linear search algorithm
 *
 * @array: array to search for
 * @size: number of elements
 * @value: value to search
 * Return: index
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
