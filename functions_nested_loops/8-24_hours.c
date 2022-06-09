#include "main.h"

/**
 * jack_bauer - prints a clock
 *
 * Return: nothing
 */

void jack_bauer(void)
{
	int i, j;

	for (i = 48; i <= 57; i++)
	{
		_putchar(i);
		for (j = 48; i <= 53; j++)
		{
			putchar(j);
		}
		_putchar(10);
	}	
}
