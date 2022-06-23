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
	char *ret;

	if (size < 1)
	{
		ret = NULL;
	}
	else
	{
		malloc((sizeof(int)) * size);
	}
}