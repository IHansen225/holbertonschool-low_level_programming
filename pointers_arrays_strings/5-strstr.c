#include "main.h"
#include <stddef.h>

/**
 * _strstr - returns length of a certain pattern
 * @haystack: string
 * @needle: characters to find
 * 
 * Return: length of a given pattern
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j, temp;
	char *s;

	temp = 0;
	for (i = 0; haystack[i]; i++)
	{
		if (haystack[i] == needle[0])
		{
			s = &haystack[i];
			temp = i + 1;
			for (j = 1; haystack[j]; j++)
			{
				if (haystack[j] == needle[j])
				{
					if (needle[j + 1] == '\0')
					{
						return (s);
					}
					else
					{
						continue;
					}
				}
				else
				{
					break;
				}
			}
		}
	}
	s = NULL;
	return (s);
}
