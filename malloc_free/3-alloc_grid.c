#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid - prints multiplication
 * @width: string
 * @height: string
 *
 * Return: nothing
 */

int **alloc_grid(int width, int height)
{
	int i;

	if (width <= 0 || height <= 0)
		return (NULL);

	for (i = 0; i < width; i++)
		mat[i] = (int*)malloc(height * sizeof(int));

	return (mat);
}
