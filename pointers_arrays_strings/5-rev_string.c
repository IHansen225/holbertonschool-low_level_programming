#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string input
 * 
 * Returns: nothing
 */

void rev_string(char *s)
{
    int len = _strlen(s)
    char *first = str;
    char *last = start + len - 1;
    char aux;

    while (last > first)
    {
        aux = *first;
        *first = *last;
        *last = aux;
        ++first;
        --last;
    }
}
