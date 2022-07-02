#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdarg.h>
#include "variadic_functions.h"


int sum_them_all(const unsigned int n, ...)
{
    int res = 0;
    int i;
    va_list ap;
    va_start(ap, n);
        for (i = 0; i < n; i++)
        {
            res += va_arg(ap, unsigned int);
        }
    va_end(ap);
    return (res);
}