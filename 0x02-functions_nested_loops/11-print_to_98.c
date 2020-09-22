#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 *
 * @n: int
 *
 * Return: void
 */

void	print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d", n);
		if (n != 98)
		{
			printf(", ");
		}
	n++;
	}
	while (n > 98)
	{
		printf("%d", n);
		if (n != 98)
		{
			printf(", ");
		}
	n--;
	}
	if (n == 98)
	{
		printf("98");
	}
	printf("\n");
}
