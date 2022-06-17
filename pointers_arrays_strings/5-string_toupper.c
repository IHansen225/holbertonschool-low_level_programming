#include "main.h"

/**
 * string_toupper - copies a string
 * 
 * Return: difference
 */

char *string_toupper(char *a)
{
	int i, j;

	i = 0;
	while (a[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < i; j++)
	{
		if ((a[j] > 96) && (a[j] < 123))
		{
			a[j] = (a[j] - 32);
		}
	}

	return a;
}
