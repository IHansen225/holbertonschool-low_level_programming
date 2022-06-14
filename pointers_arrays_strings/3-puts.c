#include "main.h"

/**
 * _puts - counts characters on string 
 * @str: pointer
 * Return: nothing
 */
void _puts(char *str)
{
	int i;

	while(str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}
