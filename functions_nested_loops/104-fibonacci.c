#include <stdio.h>
#include "main.h"

/**
* _isupper - checks for uppercase char
* Return: 1 if true
*/

void main(void)
{
	int nprint, n1, n2, cont;

	n1 = 0;
	n2 = 1;
	for (cont = 0; cont <= 98; n++)
	{
		nprint = n1 + n2;
		printf("%d, ", nprint);
		n1 = n2;
		n2 = nprint;
	}
}
