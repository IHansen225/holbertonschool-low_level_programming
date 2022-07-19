#include "main.h"

/**
 * binary_to_uint - convert binary to uint
 *
 * @b: binary
 * Return: uint
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int ret = 0, bit = 1;

	if (b == NULL)
		return (0);

	for (i = 0; b[i]; i++)
		;;

	for (; i > 0; i--)
	{
		if (b[i] == '1')
			ret += bit;
		else if (b[i] != '0')
			return (0);

		bit = (bit * 2);
	}

	return (ret);
}
