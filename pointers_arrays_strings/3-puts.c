#include "main.h"

/**
 * _puts - counts characters on string 
 * @str: pointer
 * Return: nothing
 */
void _puts(char *str)
{
	int len = _strlen(str);
	int i;

	for (i = 0; i <= len; i++)
	{
		_putchar(str[i]);
	}
}
