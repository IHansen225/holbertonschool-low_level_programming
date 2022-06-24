#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - creates an array
 * @min: int
 * @max: int
 *
 * Return: nothing
 */

int *array_range(int min, int max)
{
	int *arr;
	int len;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	p = malloc(len * (sizeof(int)));
	if (p == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
		p[i] = min + i;
	return (p);
}
