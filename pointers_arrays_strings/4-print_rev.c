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
	};
	_putchar(cont + '0');
	for (i = cont; i == 0; i--)
	{
		_putchar(s[i]);
	};
	_putchar(10);
}
