#include "holberton.h"

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: string to grite to the file
 * Return: 1 if success, or -1 if fails
 */
int create_file(const char *filename, char *text_content)
{
	int fd = 0, wr = 0;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";

	fd = open(filename, O_RDWR | O_CREAT, 0600);
	if (fd == -1)
		return (-1);

	wr = write(fd, text_content, _strlen(text_content));
	if (wr == -1)
		return (-1);

	close(fd);
	return (1);
}

/**
 * _strlen - return the length of a string
 * @s: Is a character
 * Return: 0 (Succes)
 */
int _strlen(char *s)
{
	size_t len;

	for (len = 0; s[len] != '\0'; len++)
		;

	return (len);
}
