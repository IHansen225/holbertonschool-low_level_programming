#include "search_algos.h"

/**
 * binary_search - binary search algorithm
 * 
 * @array: array to search
 * @size: size of the array
 * @value: value to search
 * Return: index
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i, mid, low, high;

	if (!array)
		return -1;
	high = size - 1, low = 0;
	while (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
			printf("%d%s", array[i], (i != high) ? ", " : "");
		putchar('\n');
		mid = (low + high) / 2;
		if (array[mid] == value)
			return (mid);
		if (value < array[mid])
			high = mid - 1;
		else if (value > array[mid])
			low = mid + 1;
	}
	if (array[mid] == value)
		return (mid);
	return (-1);
}
