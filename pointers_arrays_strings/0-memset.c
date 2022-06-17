#include "main.h"

/**
 * _memset - capitalizes a string
 * @s: memory area
 * @b: specific byte
 * @n: number of bytes to set
 * 
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		*s = b;
		s++;
	}
	
	return (s);
}
