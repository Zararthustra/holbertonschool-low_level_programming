#include "holberton.h"

/**
 * read_textfile -  reads a text file and prints it to the POSIX standard output
 * @filename: filename
 * @letters: number of letters it should read and print
 * Return: actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int filedes;
	int _read;
	int _write;
	char *buffer;

	if (filename == NULL)
		return (0);
	filedes = open(filename, O_RDONLY);
	if (filedes == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters + 1);
	if (buffer == NULL)
		return (0);
	_read = read(filedes, buffer, letters);
	if (_read == -1)
	{
		close(filedes);
		free(buffer);
		return (0);
	}
	buffer[letters + 1] = '\0';
	_write = write(STDOUT_FILENO, buffer, _read);
	close(filedes);
	free(buffer);
	return (_write);
}
