#include <stdio.h>
#include "main.h"

/**
* print_triangle - triangle printer
* Return: void
*/

void print_triangle(int size) 
{
	int i, j, k, spac, tri;

	spac = size;
	tri = 0;
	if (size != 0)
	{
		for (i = 0; i <= size; i++)
		{
			spac--;
			tri++;
			for (j = 0; j <= spac; j++)
				_putchar(32);
			for (k = 0; k <= tri; k++)
				_putchar(95);
			_putchar(10);
		}
	}
	else
	{
		_putchar(10);
	}
}
