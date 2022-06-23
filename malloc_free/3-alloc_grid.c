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
	int *col, *row

	if (width <= 0 || height <= 0)
		return (NULL);
	col = malloc(height * sizeof(*int));
	if (col == NULL)
		return (NULL);
	for (i = 0; i < width; i++)
	{
		row = malloc(width * sizeof(*int));
		col[i] = row;
	}
	return (col);
}
