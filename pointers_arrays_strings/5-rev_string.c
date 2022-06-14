#include "main.h"

/**
 * rev_string - counts characters on string
 * @s: pointer
 * Return: nothing
 */
void rev_string(char *s)
{
	char mirror = s;
	int i, j;
	
	j = 0;
	while (mirror[i] != '\0')
	{
		i++;
	}
	while (i >= 0)
	{
		s[j] = mirror[i]
		i--;
		j++;
	}
}
