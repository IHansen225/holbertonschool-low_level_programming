#include "main.h"

/**
 * _strcpy - copies a ecrtain array
 * @dest: string input
 * @src: reach
 *
 * Returns: pointer
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
	dest[i] = '\0';

	return (dest);
}
