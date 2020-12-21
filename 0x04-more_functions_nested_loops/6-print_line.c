#include "holberton.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: int
 * Return: void
 */

void print_line(int n)
{
	int a = 0;

	while (a < n && n > 0)
	{
		_putchar(95);
		a++;
	}
	_putchar('\n');
}
