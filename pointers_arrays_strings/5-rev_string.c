#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string input
 * 
 * Returns: nothing
 */
void rev_string(char *s)
{
	int len = 0;
	int i;
	char temp;

	while (s[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < (len/2); i++){
		temp = arr[i];
		arr[i] = arr[len-i-1];
		arr[len-i-1] = temp;
	}
}
