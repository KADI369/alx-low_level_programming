#include "main.h"

/**
 *read_textfile - reads a text file and prints it to the standard output.
 *@filename: text file that will be read
 *@letters: letters to be read
 *
 *Return: actual number of letters it could read and print
 *	otherwise if filename is NULL return 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t fd, numr, numw;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	numr = read(fd, buff, letters);
	numw = write(STDOUT_FILENO, buff, numr);

	free(buff);
	close(fd);

	return (numw);
}
