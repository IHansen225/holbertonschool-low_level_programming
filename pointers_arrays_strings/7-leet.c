#include "main.h"

/**
 * leet - capitalizes a string
 * @a: string
 *
 * Return: nothing
 */

char *leet(char *a)
{
	int i, j;
	char comp[10] = {'a', 'A', 'e', 'E', 'o', 'O', 'l', 'L', 't', 'T'};
	char chng[10] = {'4', '4', '3', '3', '0', '0', '1', '1', '7', '7'};

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (a[i] == comp[j])
			{
				a[i] = chng[j];
			}
		}
	}
	return (a);
}
