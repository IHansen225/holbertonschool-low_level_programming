#include "main.h"

/**
 * puts2 - prints a certain pattern
 * @s: string input
 *
 * Returns: nothing
 */
void puts2(char *s)
{
	int i;
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	for (i = 0; i <= len; i++)
	{
		if ((i % 2) = 0)
		{
			_putchar(s[i]);
		}
	}
}
