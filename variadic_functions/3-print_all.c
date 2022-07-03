#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - print all arguments
 *
 * @n: elements to print
 * @separator: separator
 * Return: nothing
 */

void print_all(const char * const f, ...)
{
	unsigned int i, len;
	va_list ap;
	char *stp;
	char c[1];
	char *args;


	i = 0;
	len = 0;
	while (f[i])
		{
			if ((f[i] == 'c') || (f[i] == 'i') || (f[i] == 'f') || (f[i] == 's'))
				len++;
			i++;
		}
	va_start(ap, len);

	va_end(ap);
	printf("\n");
}
