#include "main.h"

/**
 * factorial - first recursion function
 * @s: string
 * 
 * Return: nothing
 */

int factorial(int n)
{
	if (n > 1)
		return (n * factorial(n - 1));
	if (n == 1 || n == 0)
		return (1);
	return (-1);
}
