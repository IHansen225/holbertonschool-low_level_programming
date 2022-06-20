#include "main.h"
#include <stddef.h>

/**
 * print_diagsums - returns length of a certain pattern
 * @a: string
 * @size: arr size
 * 
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int sum1, sum2, i, j;

	for (i = 0; i < size; i++)
	{
		sum1 = sum1 + a[i * size + i];
	}
	j = 0;
	for (i = size - 1; i > 0; i--)
	{
		sum2 += a[i * size + (size - i - 1)];
	}
	printf("%d, %d", sum1, sum2);
}
