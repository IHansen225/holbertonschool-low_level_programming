#include "main.h"
#include <stdio.h>

/**
 * print_array - prints a certain pattern
 * @s: string input
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
			printf("%d\n", a[i]);
		}
		else
		{
			printf("%d, ", a[i]);
		}
	}
}
