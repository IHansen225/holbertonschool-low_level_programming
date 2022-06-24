#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concats a string with another
 * @s1: string
 * @s2: string
 * @n: int
 *
 * Return: nothing
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j, len1, len2;
	char *s3;

	if (s1 == NULL)
		len1 = 0;
	else
		len1 = strlen(s1);
	if (s2 == NULL)
		len2 = 0;
	else if (n >= strlen(s2))
		len2 = strlen(s2);
	else
		len2 = n;
	s3 = malloc(len1 + len2 + 1);
	for (i = 0; i <= len1; i++)
		s3[i] = s1[i];
	for (j = 0; j <= len2; j++)
	{
		s3[i] = s2[j];
		i++;
	}
	return (s3);
}
