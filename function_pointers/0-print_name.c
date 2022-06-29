#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_name - print the dog struct
 * @name: print
 * @f: function to be called
 *
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
	{
		return;
	}
	else
	{
		f(name);
	}
}