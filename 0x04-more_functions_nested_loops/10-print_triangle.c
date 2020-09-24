#include "holberton.h"

/**
 * print_triangle - prints a triangle
 * @size: size of triangle
 * Return: Always 0.
 */

void print_triangle(int size)
{
	int a = size;
	int b = size;
	int n;

	if (size <= 0)
	{
		_putchar('\n');
	}
	while (a > 0)
	{
		n = 0;
		while (n < b - 1)
		{
			_putchar(' ');
			n++;
		}
		while (n < size)
		{
			_putchar('#');
			n++;
		}
		_putchar('\n');
		a--;
		b--;
	}
}
