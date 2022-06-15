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
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
