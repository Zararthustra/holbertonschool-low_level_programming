#include "1-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - calculate
 * @argc: argc
 * @argv: argv
 * Return: 0 if OK, 98 if argc != 4, 99 if operator
 * is no correct, 100 if try to / or % by 0.
 */

int main(int argc, char *argv[])
{
	int (*get_get_op_func)(int, int);
	int res;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	if ((*argv[2] != '+' && *argv[2] != '-'
		&& *argv[2] != '*' && *argv[2] != '/'
		&& *argv[2] != '%') || argv[2][1] != '\0')
	{
		printf("Error\n");
		return (99);
	}
	if ((*argv[2] == '/' && atoi(argv[3]) == 0)
		|| (*argv[2] == '%' && atoi(argv[3]) == 0))
	{
		printf("Error\n");
		return (100);
	}
	get_get_op_func = get_op_func(argv[2]);
	res = get_get_op_func(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", res);
	return (0);
}
