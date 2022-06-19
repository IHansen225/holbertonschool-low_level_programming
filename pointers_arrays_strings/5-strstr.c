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
	int i, j, mark;
	
	if (needle[0] != 0)
	{
		for (i = 0; haystack[i]; i++)
		{
			if (haystack [i] == needle[0])
			{
				mark = i;
				for (j = 0; needle[j]; j++)
				{
					if (needle[j + 1] == '\0')
					{
						return (&haystack[mark]);
					}
				mark++;
				}
			}
		}
	}
	
	haystack = NULL;	
	return (haystack);
}
