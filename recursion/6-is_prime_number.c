#include "main.h"

/**
 * _pow_recursion - returns power of certain number
 * @x: value
 * @y: value
 *
 * Return: nothing
 */

int _recusrive_division(int x, int y)
{
	if ((x % y != 0) && (x != y))
	{
		return (_recusrive_division(x, (y + 1)));
	}
	else
	{
		return (1);
	}
	return (0);
}

int is_prime_number(int n)
{
	return (_recusrive_division(n, 2));
}
