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
	int len;
	char *newstr;
	int i;

	if (str == NULL)
		return (NULL);
	len = strlen(str);
	newstr = malloc((sizeof(char) * len) + 1);
	if (newstr == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		newstr[i] = str[i];
	}
	return (newstr);
}
