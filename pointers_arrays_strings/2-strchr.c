#include "main.h"

/**
 * _strchr - copies a pointer to a string
 * @s: string
 * @c: char to find
 * 
 * Return: pointer
 */

char *_strchr(char *s, char c)
{
	char *p = &s[0];
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < i; j++)
	{
		if (s[j] == c)
		{
			break;
		}
	}
	if (j == i)
	{
		p = NULL;
	}
	else
	{
		return (p += j);
	}
}
