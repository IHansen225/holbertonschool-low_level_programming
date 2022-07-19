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
	bool f_dig = false;

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
			f_dig = true;
			_putchar('1');
		}
		else if (f_dig)
		{
			_putchar('0');
		}
	}
}
