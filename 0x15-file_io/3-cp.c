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
	int cl1;
	int cl2;

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
	fd2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s", argv[2]);
		exit (99);
	}
	while ((rd = read(fd1, buffer, 1024)) != 0)
	{
		if (rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit (98);
		}	
		wr = write(fd2, buffer, rd);
		if (wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s", argv[2]);
			exit (99);
		}
	}
	cl1 = close(fd1);
	if (cl1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd1);
		exit (100);
	}
	cl2 = close(fd2);
	if (cl2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd2);
		exit (100);
	}
	return (0);
}
