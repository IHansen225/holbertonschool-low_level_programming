#include "main.h"

/**
 * binary_to_uint - convert binary to uint
 *
 * @b: binary
 * Return: uint
 */

unsigned int binary_to_uint(const char *b)
{
	int x = strlen(b);
	int i = ((x = 0) ? 0 : (x - 1));
	unsigned int ret = 0, bit = 1;

	if (i == 0)
		return (0);
	for (; i >= 0; i--)
	{
		if (b[i] == '1')
			ret += bit;
		else if (b[i] != '0')
			return (0);
		bit = (bit * 2);
	}

	return (ret);
}
