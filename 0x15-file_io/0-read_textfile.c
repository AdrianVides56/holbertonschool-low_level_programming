#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to SO
 * @filename: file to open
 * @letters: number of letters to read and print
 * Return: number of readable and printable letters or 0 fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, numbytes;
	ssize_t nbytes;
	char *buf;

	if (filename == NULL || letters == 0)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = (char *)malloc(sizeof(letters));
	if (buf == NULL)
		return (0);

	nbytes = read(fd, buf, letters);
	if (nbytes == -1)
		return (0);

	numbytes = write(STDOUT_FILENO, buf, nbytes);
	close(fd);
	free(buf);

	return (numbytes);
}
