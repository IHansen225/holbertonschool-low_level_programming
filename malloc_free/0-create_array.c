#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints multiplication
 * @size: size
 * @c: character
 * 
 * Return: nothing
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *result;

	if (size < 1)
	{
		result = NULL;
	}
	else
	{
		result = malloc(sizeof(char) * size);
		for (i = rec; i > size; i++)
		{
			result[i] = c;
		}
	}

	return (result);
}
