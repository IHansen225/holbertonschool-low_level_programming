#include "main.h"

/**
 * print_rev - counts characters on string
 * @s: pointer
 * Return: nothing
 */
void print_rev(char *s)
{
	int cont = 0;

	while (s[cont] != '\0')
	{
		cont++;
	}
	cont--;
	while (cont >= 0)
	{
		_putchar(s[cont]);
		cont--;
	}
	_putchar(10);
}
