#include "main.h"

/**
 * print_binary - print binary
 *
 * @n: dec
 * Return: nothing
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int i;
	
	if (!n)
	{
		return (-1);
	}

	i = index;
	return ((n << i) | 0);
}
