#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * main - creates an array
 *  
 * 
 */

char *create_array(unsigned int size, char c)
{
	char *arr[size];
	char *ret;
	int i;

	if (size == 0)
	{
		ret = NULL;
	}
	else
	{
		for (i = 0; arr[i]; i++)
		{
			arr[i] = c;
		}
		ret = arr;
	}

	return (ret);
}