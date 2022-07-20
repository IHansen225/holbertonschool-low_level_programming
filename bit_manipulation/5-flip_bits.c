#include "main.h"

/**
 * flip_bits - print binary
 *
 * @n: dec
 * @m: dec
 * Return: bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int ret;
	int i;
	bool f_dig = false;

	if (!n)
	{
		_putchar('0');
		return;
	}
	for (i = 63; i >= 0; i--)
	{
		ret = n >> i;
		if (ret & 1)
		{
			f_dig = true;
			_putchar('1');
		}
		else if (f_dig)
			_putchar('0');
	}
}
