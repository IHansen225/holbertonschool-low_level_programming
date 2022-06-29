#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>

/**
 * get_op_func - gets the appropiate pointer to the function
 * @argc: argument count
 * @argv: argument list
 *
 * Return: result of function
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op != NULL)
	{
		if (ops[i].op == s)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}