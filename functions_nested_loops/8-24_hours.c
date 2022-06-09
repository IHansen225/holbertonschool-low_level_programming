#include "main.h"

/**
 * jack_bauer - prints a clock
 *
 * Return: nothing
 */

void jack_bauer(void)
{
	int counter;
	char i, j, k, l;

	i = 48;
	j = 48;
	k = 48;
	l = 48;

	while (counter < 24)
	{
		_putchar(i);
		_putchar(j);
		_putchar(58);
		_putchar(k);
		_putchar(l);
		_putchar(10);
		counter++;
		i++;
		j++;
		k++;
		l++;
	}
}
