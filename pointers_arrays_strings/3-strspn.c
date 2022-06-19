#include "main.h"

/**
 * _strspn - returns length of a certain pattern
 * @s: string
 * @accept: characters to find
 *
 * Return: length of a given pattern
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		if (s[i] == accept[j])
		{
			count++;
			break;
		}
	}

	return (count);
}
