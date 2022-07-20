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
	unsigned int mask = 0, i = 0;

	if ((!n) || (index > 63))
	{
		return (-1);
	}
	*n &= ~(1 << index);
	return (1);
}
