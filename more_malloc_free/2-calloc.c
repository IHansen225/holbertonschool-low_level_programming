#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - concats a string with another
 * @nmemb: int
 * @size: unsigned int
 *
 * Return: nothing
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *res;

	if (nmemb == 0 || size == 0)
		return (NULL);
	res = malloc(size * nmemb);
	if (res == NULL)
		return (NULL);
	for (i = 0; i <= nmemb; i++)
	{
		res += size
		*res = 0;
	}

	return (res);
}
