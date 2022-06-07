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
	int comp[] = {44, 32};

	for (alpha = '0'; alpha <= '9'; alpha++)
	{
		putchar(alpha);
		if (alpha != '9')
		{
			for (int i = 0; i < 2; i++)
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
