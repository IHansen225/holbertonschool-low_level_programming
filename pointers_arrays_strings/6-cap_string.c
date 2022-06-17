#include "main.h"

/**
 * cap_string: capitalizes a string
 * @a: string 
 * 
 * return: nothing
 */

char *cap_string(char *a)
{
	char sep[13] = {',', ';', '.', '!', '?', '"', '(', ')', '{', '}', '\n', '\t', ' '};
	int i, j;
	int flag;

	for (i = 0; a[i] == '\0'; i++)
	{
		_putchar('x');
	}

	return (a);
}
