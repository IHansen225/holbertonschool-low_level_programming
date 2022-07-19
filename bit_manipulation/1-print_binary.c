#include "main.h"

/**
 * print_binary - print binary 
 *
 * @n: dec
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	unsigned long int i, ret;
	int f_dig = 0;

	if (!n)
	{
		_putchar('0');
		return;
	}
	for (i = 63; i == 0; i--)
	{
		ret = n >> i;

		if (ret & 1)
		{
			f_dig = 1;
			_putchar('1');
		}
		else if (f_dig)
		{
			_putchar('0');
		}
	}
}
