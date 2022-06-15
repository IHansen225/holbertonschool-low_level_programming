#include "main.h"

/**
 * print_array - prints a certain pattern
 * @a: string input
 * @n: reach
 *
 * Returns: nothing
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j;
	char *destdir = &dest;

	while (src[i] != '\0')
	{
		i++;
	}
	for (j = 0; j == i; j++)
	{
		src[i] = dest[i];
	}

	return (destdir);
}
