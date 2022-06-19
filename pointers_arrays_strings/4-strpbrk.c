#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - returns length of a certain pattern
 * @s: string
 * @accept: characters to find
 *
 * Return: length of a given pattern
 */

char *_strpbrk(char *s, char *accept)
{
	int j, flag;
	unsigned int i;

	flag = 0;
	for (i = 0; s[i]; i++)
	{
		if (flag == 0)
		{
			for (j = 0; accept[j]; j++)
			{
				if (s[i] == accept[j])
				{
					return (s + i);
				}
			}
		}
	}
	s = NULL;
	return (s);
}
