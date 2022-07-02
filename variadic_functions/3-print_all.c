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

void print_all(const char * const format, ...)
{
	unsigned int i, len;
	va_list ap;
	char *stp, *ch;

	i = 0;
	len = strlen(format);
	va_start(ap, len);
		while (i < len)
		ch = format[i];
		{
			switch (ch[0])
			{
				case ('c'):
					printf("%s", va_arg(ap, char *));
					break;
				
				case ('f'):
					printf("%f", va_arg(ap, float));
					break;

				case ('i'):
					printf("%d", va_arg(ap, int));
					break;

				case ('s'):
					printf("%s", va_arg(ap, char *));
					break;
			}
			if ((i + 1) != len)
				printf(", ");
		}
	va_end(ap);
	printf("\n");
}
