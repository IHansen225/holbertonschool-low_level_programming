#include "main.h"

/**
 * jack_bauer - prints a clock
 *
 * Return: nothing
 */

void jack_bauer(void)
{
	int hours, minutes;

	for (hours = 0; hours <= 23; hours++)
	{
		for (minutes = 0; minutes < 60; minutes++)
		{
			_putchar((hours/10)+'0');
			_putchar((hours%10)+'0');
			_putchar(58);
			_putchar((minutes/10)+'0');
			_putchar((minutes%10)+'0');
			_putchar(10);
		}
	}
}
