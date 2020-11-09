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
 * create_file - creates a file
 * @filename: file name
 * @text_content: NULL terminated string
 * Return: 1 succeed, -1 failed
 */

int create_file(const char *filename, char *text_content)
{
	int filedes;
	int _write;

	if (filename == NULL)
		return (-1);
	filedes = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (filedes == -1)
		return (-1);
	if (text_content != NULL)
	{
		_write = write(filedes, text_content, _strlen(text_content));
		if (_write == -1)
			return (-1);
	}
	close(filedes);
	return (1);
}
