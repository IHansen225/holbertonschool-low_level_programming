#include <stdio.h>
#include "main.h"

/**
* _isupper - checks for uppercase char
* @c: input char
* Return: 1 if true
*/

int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
