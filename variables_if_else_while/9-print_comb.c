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

	for (alpha = '0'; alpha <= '9'; alpha++)
	{
		putchar(alpha);
		if (alpha != '9')
		{
			putchar(44);
			putchar(32);
		};
	}
	putchar(10);

	return (0);
}
