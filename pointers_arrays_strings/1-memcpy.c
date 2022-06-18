#include "main.h"

/**
 * _memcpy - modifies memory
 * @dest: memory area
 * @src: memory area
 * @n: number of bytes to set
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		src[i] = dest[i];
	}

	return (dest);
}
