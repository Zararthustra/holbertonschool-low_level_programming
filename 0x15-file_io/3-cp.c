#include "holberton.h"

/**
 * main - copies the content of a file to another file
 * @argc: number of arg
 * @argv: args
 * Return: 0 succeed, -1 failed
 */

int main(int argc, char *argv[])
{
	int fd1;
	int fd2;
	int rd;
	int wr;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit (97);
	}
	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit (98);
	}
	rd = read(fd1, buffer, 1024);
	if (rd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit (98);
	}
	fd2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s", argv[2]);
		exit (99);
	}
	wr = write(fd2, buffer, rd);
	if (wr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s", argv[2]);
		exit (99);
	}
	close(fd1);
	close(fd2);
	return (0);
}
