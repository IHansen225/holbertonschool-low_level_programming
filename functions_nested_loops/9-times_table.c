#include "main.h"

/**
 * times_table - prints a multiplication table
 *
 * Return: nothing
 */

void times_table(void)
{
	int cont, mult, num;

	for (cont = 0; cont <= 9; cont++);
	{
		for (mult = 0; mult <= 9; mult++)
		{
			if (mult < 9)
			{
				if ((cont * mult) > 10)
				{
					_putchar(((cont * mult) / 10) + '0');
					_putchar(((cont * mult) % 10) + '0');
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
				else
				{
					_putchar(((cont * mult)) + '0');
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
			}
			else
			{
				if ((cont * mult) > 10)
				{
					_putchar(((cont * mult) / 10) + '0');
					_putchar(((cont * mult) % 10) + '0');
					_putchar(10);
				}
				else
				{
					_putchar(((cont * mult)) + '0')
					_putchar(10);
				}
			}
		}
	}
}
