#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - prints multiplication
 * @s1: string
 * @s2: string
 *
 * Return: nothing
 */

char *str_concat(char *s1, char *s2)
{
	int len1, len2, i, j;
	char *newstr;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len1 = strlen(s1);
	len2 = strlen(s2);
	newstr = malloc((sizeof(char) * (len1 + len2)) + 1);
	if (newstr == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
	{
		newstr[i] = s1[i];
	}
	for (j = 0; j < len2; j++)
	{
		newstr[i] = s2[j];
		i++;
	}
	
	return (newstr);
}
