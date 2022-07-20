#include "main.h"

/**
 * read_textfile - read a text file 
 * 
 * @filename: the name of the file
 * @letters: the number of characters to read
 * 
 * Return: the number of characters read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fptr = fopen(filename, "r");
	char c;
	size_t i = 0;

	while ((c != EOF) && (i < letters))
	{
		c = fgetc(fptr);
		printf("%c", c);
		i++;
	}

	fclose(fptr);
	return (i);
}
