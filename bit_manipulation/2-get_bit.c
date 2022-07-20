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
	if ((!n) || (index > 63))
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
