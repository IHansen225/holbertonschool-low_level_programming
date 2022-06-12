#include <stdio.h>
#include "main.h"

/**
* print_diagonal - prints a line
* @n: line length
* Return: void
*/

void print_diagonal(int n)
{
	int i, j, spac;

	spac = 0;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < spac; j++)
				_putchar(32);
			_putchar(92);
			_putchar(10);
			spac++;
		}
	}
	else
	{
		_putchar(10);
	}
}
