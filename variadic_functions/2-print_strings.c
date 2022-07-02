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

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);
		for (i = 0; i < n; i++)
		{
			if (strlen(va_arg(ap, char *)) == 0)
				printf("(nil)");
			else
				printf("%s", va_arg(ap, char *));
			if ((separator) && ((i + 1) != n))
			{
				printf("%s", separator);
			}
		}
	va_end(ap);
	printf("\n");
}
