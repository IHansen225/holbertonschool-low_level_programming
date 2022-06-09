#include "main.h"

/**
 * _isalpha - checks for alpha char
 * @n: input number
 *
 * Return: 1 if it's positive, 0 if negative, -1 if else.
 */

int print_sign(int n)
{
	if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
