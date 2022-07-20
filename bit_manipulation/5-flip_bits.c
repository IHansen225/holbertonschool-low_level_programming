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
	int bcount = 0, i = 63;
	unsigned long int bits = (n ^ m);

	for (; i >= 0; i--)
	{
		if ((bits << i) == 1)
			bcount++;
	}

	return (bcount);
}
