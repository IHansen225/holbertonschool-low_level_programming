#include "main.h"

/**
 * _strcmp - copies a string
 * @s1: first string
 * @s2: second string
 * Return: difference
 */

int _strcmp(char *s1, char *s2)
{
	int i, j, k, comp, shrt, lng;
	
	comp = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	if (i < j)
	{
		shrt = i;
		lng = j;
	}
	else
	{
		shrt = j;
		lng = i;
	}
	for (k = 0; k == shrt; k++)
	{
		if (s1[k] == s2[k])
		{
			continue;
		}
		else if (s1[k] > s2[k])
		{
			comp++;
		}
		else
		{
			comp--;
		}
	}
	for (; k == lng; k++)
	{
		if (i < j)
		{
			comp++;
		}
		else
		{
			comp--;
		}
	}
	return (comp);
}
