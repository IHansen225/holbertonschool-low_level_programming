#include <stdio.h>
#include "main.h"

/**
* print_line - prints a line
* @n: line length
* Return: void
*/

void print_line(int n)
{
	int i = 0;

	for (int i = 0; i < n; i++)
	{
		_putchar(95);
	}
	_putchar(10);
}
