#include "main.h"

/**
 * get_bit - print binary
 *
 * @n: dec
 * @index: index
 * Return: nothing
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int i;
	
	if (!n)
	{
		return (-1);
	}

	i = 63 - index;
	return ((n >> i) | 0);
}
