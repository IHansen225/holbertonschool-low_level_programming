#include "main.h"

/**
 * _strncat - changes a certain value
 * @dest: pointer
 * @src: pointer
 * @n: byte length
 * Return: pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < n; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
