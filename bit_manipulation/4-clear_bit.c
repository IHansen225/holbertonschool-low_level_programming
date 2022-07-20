#include "main.h"

/**
 * clear_bit - print binary
 *
 * @n: dec
 * @index: index
 * Return: nothing
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask = 0;
	int i = 0;
	
	if ((!n) || (index > 63))
	{
		return (-1);
	}
	for (; i < 64; i++)
	{
		if (i = index)
			continue;
		else
			mask = ((*n) & (1 << i));
	}
	*n = mask;
	return (1);
}
