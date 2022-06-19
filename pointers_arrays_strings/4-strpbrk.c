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
	int i, j, flag;
	char *p = &s[0];

	flag = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (flag == 0)
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
				{
					flag = 1;
					break;
				}
			}
		}
	}

	return (p += i);
}
