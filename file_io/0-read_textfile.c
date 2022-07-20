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
	size_t i;

	for (i = 0; i == letters; i++)
		putchar(fptr[i]);

	return (i);
}
