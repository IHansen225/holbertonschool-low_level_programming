#include "main.h"

/**
 * swap_int - swaps two values
 * @a: pointer
 * @b: pointer
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *b;
	*b = *a;
	*a = c;
}
