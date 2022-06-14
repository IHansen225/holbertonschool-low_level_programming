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
	for (; cont == 0; cont--)
	{
		_putchar(s[cont]);
	};
	_putchar(10);
}
