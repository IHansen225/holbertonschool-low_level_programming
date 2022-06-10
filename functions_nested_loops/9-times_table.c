#include "main.h"

/**
 * times_table - prints a multiplication table
 *
 * Return: nothing
 */

void times_table(void)
{
	int lar = 10;
	int times[lar] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	for (i = 0; i <= lar; i++);
	{
		if (i != 9)
		{
			_putchar((times[i] * i) + '0');
			_putchar(44);
			_putchar(32);
			_putchar(32);
		}
		else
		{
			_putchar((times[i] * i) + '0');
		}
	}
}
