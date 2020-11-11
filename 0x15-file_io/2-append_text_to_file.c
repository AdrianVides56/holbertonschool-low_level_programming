#include "holberton.h"

/**
 * append_text_to_file - appends text at the ens of a file
 * @filename: name of the file
 * @text_content: string to add at the end of the file
 * Return:  1 on success ans -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd = 0, wr = 0;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);

	fd = open(filename, O_WRONLY | O_APPEND);
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
