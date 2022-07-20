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
	FILE *fptr;
	char c;
	size_t i = 0;

	if (!filename)
	{
		return (0);
	}
	fptr = fopen(filename, "r")
	while ((c != EOF) && (i < letters))
	{
		c = fgetc(fptr);
		printf("%c", c);
		i++;
	}
	fclose(fptr);
	if (i < letters)
	{
		return (0);
	}
	return (i);
}
