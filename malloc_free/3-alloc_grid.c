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
	int **mat;

	if (width <= 0 || height <= 0)
		return (NULL);
	mat = malloc(height * sizeof(int *));
	if (mat == NULL)
		return (NULL);
	for (int i = 0; i < width; i++)
	{
		mat[i] = malloc(width * sizeof(int));
		if (mat[i] == NULL)
		{
			for (; i >= 0; i--)
				free(mat[i]);
			free(mat);
			return (NULL);
		}
		else
		{
			for (j = 0; mat[i][j]; j++)
				mat[i][j] = 0;
		}
		return (mat);
	}
}
