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

	result = malloc(sizeof(char) * size);
	if (result == NULL)
		return (NULL);

	if (size < 1)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; size > i; i++)
		{
			result[i] = c;
		}

		return (result);
	}
}
