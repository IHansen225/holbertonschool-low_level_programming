#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints sucession to 98
 * @n: numeric input
 *
 * Return: nothing
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n > 98; n--)
		{
			printf("%d, ", n);
		};
		printf("98");
	}
	else if (n == 98)
	{
		printf("98");
	}
	else
	{
		for (; n < 98; n++)
		{
			printf("%d, ", n);
		};
		printf("98");
	}
}
