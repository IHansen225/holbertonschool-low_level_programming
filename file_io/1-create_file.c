#include "main.h"

/**
 * create_file - read a text file
 *
 * @filename: the name of the file
 * @text_content: the number of characters to read
 *
 * Return: the number of characters read
 */

int create_file(const char *filename, char *text_content)
{
	int ofile, wfile;

	if (!filename)
	{
		return (1);
	}
	ofile = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (ofile == -1)
	{
		return (-1);
	}
	if (!text_content)
	{
		return (1);
	}
	wfile = write(ofile, text_content, strlen(text_content));
	close(ofile);
	if (wfile == -1)
	{
		return (-1);
	}
	return (1);
}
