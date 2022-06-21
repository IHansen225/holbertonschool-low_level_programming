#include <stdio.h>

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
		printf("%d\n", (argv[1] * argv[2]));
	}

	return (0);
}
