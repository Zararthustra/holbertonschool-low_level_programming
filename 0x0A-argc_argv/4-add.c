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
	int j;
	int add = 0;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			if (argv[i][j] < '0' || argv[i][j] > '9' || argv[i][j] == '\0')
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		add = add + atoi(argv[i]);
		i++;
	}
	printf("%d\n", add);
	return (0);
}
