#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - add numbers
 * @argc: argc
 * @argv: argv
 * Return: result, error if not all digits,
 * 0 if no number passed to the program
 */

int main(int argc, char *argv[])
{
	int i;
	int add = 0;

	i = 1;
	while (i < argc)
	{
		if (*argv[i] < '0' || *argv[i] > '9' || *argv[i] == '\0')
		{
			printf("Error\n");
			return (1);
		}
		add = add + atoi(argv[i]);
		i++;
	}
	printf("%d\n", add);
	return (0);
}
