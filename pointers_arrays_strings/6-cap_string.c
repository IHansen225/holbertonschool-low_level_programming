#include "main.h"

/**
 * cap_string: capitalizes a string
 * @a: string 
 * 
 * return: nothing
 */

char *cap_string(char *a)
{
	char sep[13] = {',', ';', '.', '!', '?', '"', '(', ')', '{', '}', '\n', '\t', ' '};
	int i, j;
	int flag;

	for (i = 0; a[i] == '\0'; i++)
	{
		if (flag == 0)
		{
			for (j = 0; j <= 13; j++)
			{
					if (a[i] == sep[j])
					{
						flag = 1;
						break;
					}
			}
		}
		else
		{
			if ((a[i] > 96) && (a[i] < 123))
			{
				a[i] = a[i] - 32;
				flag = 0;
			}
		}
	}

	return (a);
}
