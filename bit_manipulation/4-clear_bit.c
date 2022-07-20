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
	if ((!n) || (index > 63))
	{
		return (-1);
	}

	*n = (*n & (0 << index));

	return (1);
}
