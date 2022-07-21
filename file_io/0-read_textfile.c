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
	char *fptr = malloc(letters);
	int ofile, rfile, wfile, let;

	if (!fptr)
	{
		return (0);
	}
	if (!filename)
	{
		return (0);
	}
	let = (int)letters;
	ofile = open(filename, O_RDONLY);
	if (ofile == -1)
	{
		free(fptr);
		return (0);
	}
	rfile = read(ofile, fptr, letters);
	if (rfile == -1)
	{
		free(fptr);	
		return (0);
	}
	wfile = write(STDOUT_FILENO, fptr, letters);
	if ((wfile == -1) || (wfile < let))
	{
		free(fptr);
		return (0);
	}
	close(ofile);
	return (wfile);
}
