#include "main.h"

/**
 * _islower - checks for lowercase char
 * @c: input character
 *
 * Return: 1 if it's lowercase, 0 in any other case.
 */

int _islower(int c)
{
	if (c > 97 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
