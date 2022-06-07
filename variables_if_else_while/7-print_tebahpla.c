#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alpha;

	for (alpha = 122; alpha >= 97; alpha++)
	{
		putchar(alpha);
	}
	putchar(10);

	return (0);
}
