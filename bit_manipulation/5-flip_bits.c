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
	int bcount = 0, i = 0;
	unsigned long int bits = (n ^ m);

	for (; i <= 63; i++)
	{
		if (((bits >> i) & 1) == 1)
			bcount++;
	}

	return (bcount);
}
