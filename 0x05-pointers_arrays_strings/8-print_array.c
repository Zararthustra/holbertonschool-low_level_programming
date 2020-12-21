#include "holberton.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of int
 * @a: arrayname
 * @n: int
 * Return: void
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		i++;
		if (i != n)
			printf(", ");
	}
	printf("\n");
}
