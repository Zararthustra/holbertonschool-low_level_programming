#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <features.h>

/**
 * main - add numbers
 * @argc: argc
 * @argv: argv
 * Return: result or error or 0
 */

int main(int argc, char *argv[])
{
	int i = 0;
	int add = 0;

	if (argc == 0)
		printf("0\n");
	if (!isdigit(argv[i]))
	{
		printf("Error\n");
		return (1);
	}
	i = 0;
	add = add + atoi(argv[i]);
	while (argc > 1)
	{
		printf("%d\n", add);
		i++;	
	}
	return (0);
}
