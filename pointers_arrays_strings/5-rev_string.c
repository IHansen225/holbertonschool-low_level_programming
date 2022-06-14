#include "main.h"

/**
 * rev_string - counts characters on string
 * @s: pointer
 * Return: nothing
 */
void rev_string(char *s)
{
	char mirror[_strlen(s)];
	int i, j;

	i = 0;
	j = len;
	while (s[i] != '\0')
	{
		mirror[j] = s[i];
		i++;
		j--;
	}
	i = 0;
	while (i >= len)
	{
		s[i] = mirror[i];
		i++;
	}
}
