#include "main.h"

/**
 * _strlen - counts characters on string
 * @s: pointer
 * Return: length
 */
int _strlen(char *s)
{
	int cont = 0;

	while (s[cont] != '\0')
	{
		cont++;
	}

	return (cont);
}
