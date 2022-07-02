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
	unsigned int i, j, len;
	va_list ap;
	char *stp;
	char *c[1];

	i = 0; 
	va_start(ap, len);
		while (i < len)
		c[0] = format[i];
		{
			switch (c[0])
			{
				case ('c'):
					printf("%s", va_arg(ap, char *));
					break;
				
				case ('f'):
					printf("%f", va_arg(ap, double));
					break;

				case ('i'):
					printf("%d", va_arg(ap, int));
					break;

				case ('s'):
					stp = va_arg(ap, char *);
					if (stp == NULL)
						printf("(nil)");
					else
						printf("%s", stp);
					break;
			}
			if ((i + 1) != len)
				printf(", ");
		}
	va_end(ap);
	printf("\n");
}
