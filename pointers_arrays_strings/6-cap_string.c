#include "main.h"

/**
 * cap_string: capitalizes a string
 * @a: string 
 * 
 * return: nothing
 */

char *cap_string(char *a)
{
	char sep[13] = {44, 59, 46, 33, 63, 34, 40, 41, 123, 125, 10, 13, 32};
	int i, j;
	int flag = 0;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (i != 0)
		{
			for (j = 0; j == 13; j++)
			{
				if (a[i - 1] == sep[j])
				{
					flag = 1;
					break;
				}
			}
		}
		if (((i == 0) || (flag == 1)) && ((a[i] > 96) && (a[i] < 123)))
		{
			a[i] = a[i] - 32;
			flag = 0;
		}
	}

	return (a);
}
