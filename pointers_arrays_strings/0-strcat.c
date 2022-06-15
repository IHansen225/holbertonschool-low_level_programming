#include "main.h"

/**
 * _strcat - changes a certain value
 * @dest: pointer
 * @src: pointer
 * Return: pointer
 */
char *_strcat(char *dest, char *src)
{
	int i, j, k;

	i = 0;
	j = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	while (dest[j] != '\0')
        {
                j++;
        }
	for (k = 0; k == i; k++)
	{
		dest[j] = src [k];
		j++;
	}
	dest[j] = '\0';

	return (dest);
}
