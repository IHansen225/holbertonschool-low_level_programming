#include "main.h"
#include <stdio.h>

/**
 * print_array - prints a certain pattern
 * @a: string input
 * @n: reach
 *
 * Returns: nothing
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
		{
			printf("%d", a[i]);
			_putchar(10);
		}
		else
		{
			printf("%d, ", a[i]);
		}
	}
}
