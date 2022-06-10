#include "main.h"

/**
 * times_table - prints a multiplication table
 *
 * Return: nothing
 */

void times_table(void)
{
	int len = 10;
	int col[len] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	for (i = 0; i <= len; i++);
	{
		if (i != 9)
		{
			_putchar((col[i] * i) + '0');
			_putchar(44);
			_putchar(32);
			_putchar(32);
		}
		else
		{
			_putchar((col[i] * i) + '0');
		}
	}
}
