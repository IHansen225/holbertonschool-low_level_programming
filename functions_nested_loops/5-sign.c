#include "main.h"

/**
 * _isalpha - checks for alpha char
 * @c: input character
 *
 * Return: 1 if it's lowercase, 0 in any other case.
 */

int print_sign(int n);
{
	if (n == 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n > 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
