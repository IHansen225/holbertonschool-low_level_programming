#include "main.h"

/**
 * set_bit - print binary
 *
 * @n: dec
 * @index: index
 * Return: nothing
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if ((!n) || (index > 63))
	{
		return (-1);
	}
	(*n) >> index ^= 1;

	return (1);
}
