#include <stdio.h>
#include "main.h"

/**
* more_numbers - prints numbers
* Return: void
*/

void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 14; i++)
	{
		if (i > 14)
		{
			_putchar((i / 10) + '0');
		}
		_putchar((i % 10) + '0');
	}
	_putchar(10);
}
