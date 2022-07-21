#include "main.h"

/**
 * @brief 
 * 
 */

int main(int argc, char *argv[])
{
	int ofile_from;

	if (argc < 3)
	{
		printf("Usage: cp file_from file_to");
		exit (97);
	}
	ofile_from = open(argv[1], O_RDONLY);
	if (ofile_from == -1)
	{
		printf("Error: Can't read from %s", argv[1]);
		exit (98);
	}

	return (0);
}