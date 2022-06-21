#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - prints multiplication
 * @argc: number of arguments
 * @argv: arguments
 * 
 * Return: nothing
 */

int main(int argc, char **argv)
{
	int i, j, sum;

	sum = 0;
		if (argc < 3)
		{
			printf("0\n");

			return (0);
		}
		for (j = 1; j < argc; j++)
		{
			for (i = 0; argv[j][i]; i++)
			{
				if (isdigit(argv[j][i]) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}

			sum += atoi(argv[j]);
		}
	printf("%d\n", sum);

	return (0);
}
