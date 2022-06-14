#include "main.h"

/**
 * print_rev - counts characters on string
 * @s: pointer
 * Return: nothing
 */
void print_rev(char *s)
{
	int cont = 0;
	int i;

	while (s[cont] != '\0')
	{
		cont++;
	}

	for (i = cont; i == 0; i--)
	{
		_putchar(str[i]);
	}
	_putchar(10);
}
