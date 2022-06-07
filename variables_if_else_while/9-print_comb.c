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
	int alpha;
	int comp[] = {44, 32};
	int i;

	for (alpha = 48; alpha <= 57; alpha++)
	{
		putchar(alpha);
		if (alpha != '9')
		{
			for (i = 0; i < 2; i++)
			{
				putchar(comp[i]);
			};
		}
		else
		{
			putchar('$');
		};
	}
	putchar(10);

	return (0);
}
