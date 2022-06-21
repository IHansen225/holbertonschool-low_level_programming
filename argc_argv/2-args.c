#include <stdio.h>

/**
 * _print_mynameis - prints program name
 * 
 * Return: nothing
 */

int main(int argc, char *argv[])
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

    return (0);
}
