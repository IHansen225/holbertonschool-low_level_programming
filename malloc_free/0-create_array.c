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
		return (NULL);
	}
	else
	{
		result = malloc(sizeof(char) * size);
		for (i = 0; size > i; i++)
		{
			result[i] = c;
		}

		return (result);
	}
}
