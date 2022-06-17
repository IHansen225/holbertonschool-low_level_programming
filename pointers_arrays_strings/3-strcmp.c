#include "main.h"

/**
 * _strcmp - copies a string
 * @s1: first string
 * @s2: second string
 * Return: difference
 */

int _strcmp(char *s1, char *s2)
{
	int i, j;

	i = 0;
	j = 0;
	while (((s1[i]) && (s2[j])) && ((s1[i] == s2[j])))
	{
		i++;
		j++;
	}
	return (i - j);
}
