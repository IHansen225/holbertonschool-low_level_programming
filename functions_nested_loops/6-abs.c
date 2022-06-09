#include "main.h"

/**
 * _abs - returns absolute value
 * @n: input number
 *
 * Return: 1 if it's positive, 0 if negative, -1 if else.
 */

int _abs(int n)
{
	if (n == 0 || n > 0)
	{
		return (n);
	}
	else
	{
		return (-1 * n);
	}
}
