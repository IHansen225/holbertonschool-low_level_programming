#include <stdio.h>
#include "main.h"

/**
* main - prints fibonacci sequence
* Return: o
*/

int main(void)
{
	unsigned long nprint, n1, n2, cont;

	n1 = 0;
	n2 = 1;
	for (cont = 0; cont <= 98; cont++)
	{
		if !(cont == 98)
		{
			nprint = n1 + n2;
			printf("%lu, ", nprint);
			n1 = n2;
			n2 = nprint;
		}
		else
		{
			nprint = n1 + n2;
			printf("%lu", nprint);
		}
	}
	printf("\n");

	return (0);
}
