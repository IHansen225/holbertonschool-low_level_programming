#include <stdio.h>

/**
 * _print_mynameis - prints program name
 * 
 * Return: nothing
 */

void main(int argc, char *argv)
{
    int i;

    for (i = 1; i < argc; i++)
    {
        if (i != argc)
        {
            printf("%s ", argv[i]);
        }
        else
        {
            printf("%s\n", argv[i]);
        }
    }
}
