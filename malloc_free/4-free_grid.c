#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * free_grid - prints multiplication
 * @height: int
 *
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		for (; i >= 0; i--)
			free(grid[i]);
		free(grid);
	}
}
