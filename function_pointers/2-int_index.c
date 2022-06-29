#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * array_iterator - print the dog struct
 * @array: print
 * @size: size of the array
 * @action: function to be called
 *
 * Return: nothing
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
		else
		{
			continue;
		}
	}
	return (-1);
}
