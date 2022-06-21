#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints multiplication
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: nothing
 */

int main(int argc, char *argv[])
{

	if (argc < 3)
	{
		printf("Error\n");
	}
	else
	{
		printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
	}

	return (0);
}
