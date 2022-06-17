#include "main.h"

/**
 * reverse_array - copies a string
 * @a: first string
 * @n: numbers to swap
 * Return: difference
 */

void reverse_array(int *a, int n)
{
	int len = n;
	int i;
	int temp;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			temp = a[i];
			a[i] = a[len - i];
			a[len - i - 1] = temp;
		}
	}
}
