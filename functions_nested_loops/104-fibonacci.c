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
		nprint = n1 + n2;
		printf("%lu, ", nprint);
		n1 = n2;
		n2 = nprint;
	}

	return (0);
}
