#include "main.h"

/**
 * _isalpha - checks for alpha char
 * @c: input character
 *
 * Return: 1 if it's lowercase, 0 in any other case.
 */

int _isalpha(int c)
{
	if (c > 97 && c < 123)
	{
		return (1);
	}
	else if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
