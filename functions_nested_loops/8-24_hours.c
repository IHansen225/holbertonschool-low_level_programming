#include "main.h"

/**
 * jack_bauer - prints a clock
 *
 * Return: nothing
 */

void jack_bauer(void)
{
	char i, j, k, l;
	i = 48;
	j = 48;
	k = 48;
	l = 48;

	while (i <= 50)
	{
		_putchar(i);
		while (j <= 57)
		{
			_putchar(j);
			_putchar(58);
			while (k <= 53)
			{
				_putchar(k);
				while (l <= 57)
				{
					_putchar(l);
					_putchar(10);

				}
			}
		}
	}
}
