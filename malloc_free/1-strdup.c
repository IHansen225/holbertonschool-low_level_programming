#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - prints multiplication
 * @str: size
 *
 * Return: nothing
 */

char *_strdup(char *str)
{
	int len = strlen(str);
	char *newstr = malloc((sizeof(char) * len) + 1);
	int i;

	if (newstr == NULL || str == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		newstr[i] =str[i];
	}
	return (newstr);
}
