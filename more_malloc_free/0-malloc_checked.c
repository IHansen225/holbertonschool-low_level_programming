#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * malloc_checked - prints multiplication
 * @b: unsigned int
 *
 * Return: nothing
 */

void *malloc_checked(unsigned int b)
{
	void *ret = malloc(b);

	if (ret == NULL)
	{
		exit(98);
	}
	else
	{
		return (ret);
	}
}
