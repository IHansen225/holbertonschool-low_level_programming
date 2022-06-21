#include <stdio.h>

/**
 * _print_mynameis - prints program name
 * 
 * Return: nothing
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	
	return (0);
}
