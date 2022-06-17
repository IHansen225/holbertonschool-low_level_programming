#include "main.h"

/**
 * reverse_array - copies a string
 * @a: first string
 * @n: numbers to swap
 * Return: difference
 */

void reverse_array(int *a, int n)
{
	int i;
	long temp;

	for (i = 0; i < (n / 2); i++)
	{
		temp = a[i];
		a[i] = a[n - i];
		a[n - i] = temp;
	}
}
