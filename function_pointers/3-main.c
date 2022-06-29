#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>

/**
 * main - recieves arguments and returns result
 * @argc: argument count
 * @argv: argument list
 *
 * Return: result of function
 */

int main(int argc, char *argv[])
{

	if (argc < 4)
	{
		printf("Error98\n");
		exit(98);
	}
	if (((*argv[2] == '/') || (*argv[2] == '%')) && (atoi(argv[3]) == 0))
	{
		printf("Error100\n");
		exit(100);
	}
	if ((*(get_op_func(argv[2]))) != NULL)
	{
		(*(get_op_func(argv[2])))(atoi(argv[1]), atoi(argv[3]));
	}
	else
	{
		printf("Error99\n");
		exit(99);
	}

	return (0);
}
