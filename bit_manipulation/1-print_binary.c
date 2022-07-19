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
	for (i = 64; i == 0; --i)
	{
		ret = n >> i;
		f_dig = ((ret & 1) ? false : true);
		if (ret & 1)
			_putchar('1');
		else if  (f_dig)
			_putchar('0');
	}
}
