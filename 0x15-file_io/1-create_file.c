#include "main.h"

/**
 *create_file - function that creates a file.
 *@filename: pointer to a string represent name of the file to create.
 *@text_content: pointer to a string containing the textfile
 *
 *Return: if filename is NULL return -1.
 *	otherwise return 1.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, numw, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	numw = write(fd, text_content, len);

	if (fd == -1 || numw == -1)
		return (-1);

	close(fd);

	return (1);
}
