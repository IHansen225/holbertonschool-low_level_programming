#include "main.h"

/**
 * _strlen_recursion - first recursion function
 * @s: string
 * 
 * Return: nothing
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (s);
	}
	else
	{
		_strlen_recursion(s + 1);
	}
}
