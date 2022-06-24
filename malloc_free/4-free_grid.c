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
	
	if (grid != NULL)
	{
		for (i = height; i >= 0; i--)
			free(grid[i]);
		free(grid);
	}
}
