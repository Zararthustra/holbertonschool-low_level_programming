#include "holberton.h"

/**
 * _strlen - returns length of a string
 * @s: string
 * Return: length size
 */

int _strlen(char *s)
{
	int a = 0;

	while (*s++)
	{
		a++;
	}
	return (a);
}

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: file name
 * @text_content: NULL terminated string
 * Return: 1 succeed, -1 failed
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int written;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		written = write(fd, text_content, _strlen(text_content));
		if (written == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
