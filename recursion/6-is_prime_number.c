#include "main.h"

/**
 * _recursive_division - returns 1 if number is prime
 * is_prime_number - same as above
 * @x: value
 * @y: value
 *
 * Return: nothing
 */

int _recusrive_division(int x, int y)
{
	if ((x % y != 0) && (x != y) && (x != 1))
	{
		return (_recusrive_division(x, (y + 1)));
	}
	else if ((x == 1) || (x < 0))
	{
		return (0);
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
