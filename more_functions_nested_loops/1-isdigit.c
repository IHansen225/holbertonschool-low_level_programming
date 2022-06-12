#include <stdio.h>
#include "main.h"

/**
* _isdigit - checks for number
* @c: input char
* Return: 1 if true
*/

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
