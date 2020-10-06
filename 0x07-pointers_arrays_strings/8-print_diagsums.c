#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums -  prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: int
 * @size: size
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i;
	int square = size * size;
	int suma = 0;
	int sumb = 0;

	i = 0;
	while (i < square)
	{
		suma = suma + a[i];
		i = i + size + 1;
	}
	i = size - 1;
	while (i < square - size + 1)
	{
		sumb = sumb + a[i];
		i = i + size - 1;
	}
	printf("%d, %d\n", suma, sumb);
}
