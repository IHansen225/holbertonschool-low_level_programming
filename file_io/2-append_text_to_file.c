#include "main.h"

/**
 * append_text_to_file - read a text file
 *
 * @filename: the name of the file
 * @text_content: the number of characters to read
 *
 * Return: the number of characters read
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int ofile, wfile;

	if (!filename)
	{
		return (1);
	}
	ofile = open(filename, O_RDWR | O_APPEND);
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
