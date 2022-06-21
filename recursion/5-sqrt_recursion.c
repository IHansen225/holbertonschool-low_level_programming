#include "main.h"

/**
 * _recursive_power - returns power of certain number
 * @x: value
 * @y: value
 *
 * Return: nothing
 */

int _recursive_power(int x, int y)
{
	if ((x < 4) && (x != 1))
	{
		return (-1);
	}
	else if (x == 1)
	{
		return (1);
	}
	else if (y * y == x)
	{
		return (y);
	}
	else if (y * y < x)
	{
		return (_recursive_power(x, y + 1));
	}
	else if (y * y > x)
	{
		return (-1);
	}
	return (0);
}

/**
 * _sqrt_recursion - returns power of certain number
 * @n: value
 *
 * Return: 1, 0 or -1
 */

int _sqrt_recursion(int n)
{
	return (_recursive_power(n, 2));
}
