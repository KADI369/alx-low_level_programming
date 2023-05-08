#include "main.h"

/**
 *append_text_to_file - appends text at the end of a file.
 *@filename: pointer to a string represent name of the file to create
 *@text_content: a string to add at the end of the file
 *
 *Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, numw, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	numw = write(fd, text_content, len);

	if (fd == -1 || numw == -1)
		return (-1);

	close(fd);

	return (1);
}
