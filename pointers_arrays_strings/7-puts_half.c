#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints a certain pattern
 * @s: string input
 *
 * Returns: nothing
 */
void puts_half(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	if ((len % 2) == 0)
	{
		len = (len / 2);
		while (s[len] != '\0')
		{
			_putchar(s[len]);
			len++;
		}
	}
	else
	{
		len = ((len - 1) / 2);
		len++;
		while (s[len] != '\0')
		{
			_putchar(s[len]);
			len++;
		}
	}
	_putchar(10);
}
