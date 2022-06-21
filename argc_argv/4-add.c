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
	int i, sum;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i <= argc; i++)
		{
			if ((argc[i] > 97) && (argc[i] < 123))
			{
				printf("Error")
			}
			else
			{
				continue;
			}
		}
		for (i = 1; i <= argc; i++)
		{
			sum += atoi(argv[i]);
		}
		printf("%d", sum);
	}
}
