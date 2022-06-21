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
	int mult;

	if (argc < 3)
	{
		printf("Error\n");
	}
	else
	{
		mult = argv[1] * argv[2];
		return (mult);
	}

}
