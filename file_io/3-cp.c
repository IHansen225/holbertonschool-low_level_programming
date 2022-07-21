#include "main.h"

/**
 * main - read a text file
 *
 * @argc: argument count
 * @argv: argument list
 * 
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int ofile_from, ofile_to, cfile;

	if (argc < 3)
	{
		fprintf(stderr, "Usage: cp file_from file_to\n");
		exit(97);
	}
	ofile_from = open(argv[1], O_RDONLY);
	if (ofile_from == -1)
	{
		fprintf(stderr, "Error: Can't read from %s\n", argv[1]);
		exit(98);
	}
	ofile_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (ofile_to == -1)
	{
		cfile = close(ofile_from);
		if (cfile == -1)
		{
			fprintf(stderr, "Error: Can't close fd %d", ofile_from);
			exit(100);
		}
		fprintf(stderr, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	return (0);
}
