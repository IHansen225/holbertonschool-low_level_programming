#include "main.h"

/**
 * binary_to_uint - convert binary to uint
 * 
 * @b: binary
 * Return: uint
 */

unsigned int binary_to_uint(const char *b)
{
    int i = 0;
    unsigned int bit = 1;
    unsigned int ret = 0, aux = 0;

    for (i = 0; i < strlen(b); i++)
    {
        if (b[i] == 1)
            aux += bit;
        else if (b[i] == 0)
            continue;
        else
            return (0);

        bit = bit * 2;
    }
}