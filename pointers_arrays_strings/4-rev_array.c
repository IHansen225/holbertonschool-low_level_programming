#include "main.h"

/**
 * reverse_array - copies a string
 * @a: first string
 * @n: numbers to swap
 * Return: difference
 */

void reverse_array(int *a, int n)
{
	int len = 0;
	int i;
	char temp;

	while (a[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < n; i++)
	{
		temp = a[i];
		a[i] = a[len - i - 1];
		a[len - i - 1] = temp;
	}
}
