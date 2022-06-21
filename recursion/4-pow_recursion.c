#include "main.h"

/**
 * _pow_recursion - returns power of certain number
 * @x: value
 * @y: value
 *
 * Return: nothing
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
    {
        return(-1);
    }
    if (y >= 0)
    {
        return(_pow_recursion((x * x), (y - 1)));
    }
}
