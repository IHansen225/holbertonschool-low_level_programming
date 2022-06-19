#include "main.h"
#include <stddef.h>

/**
 * print_chessboard - returns length of a certain pattern
 * @a: string
 * 
 * Return: nothing
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; a[i]; i++)
	{
		for (j = 0; a[i][j]; j++)
		{
			_putchar(a[i][j]);
		}
	}
}
