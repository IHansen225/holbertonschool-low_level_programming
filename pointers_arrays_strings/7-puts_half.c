#include "main.h"

/**
 * puts_half - prints a certain pattern
 * @s: string input
 *
 * Returns: nothing
 */
void puts_half(char *s)
{
	int i;
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	if ((len % 2) == 0)
	{
		len = (len / 2);
		while (s[i] != '\0')
		{
			_putchar(s[i]);
			len++;
		}
	}
	else
	{
		len = ((len - 1) / 2);
		while (s[i] != '\0')
		{
			_putchar(s[i]);
			len++;
		}
	}
	_putchar(10);
}
