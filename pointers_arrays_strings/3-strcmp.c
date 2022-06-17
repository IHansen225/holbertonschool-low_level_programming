#include "main.h"

/**
 * _strcmp - copies a string
 * @s1: first string
 * @s2: second string
 * Return: difference
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (((s1[i]) && (s2[i])) && ((s1[i] == s2[i])))
	{
		i++;
	}
	return (i);
}
