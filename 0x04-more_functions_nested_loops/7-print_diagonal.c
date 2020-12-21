#include "holberton.h"

/**
 * print_diagonal -  draws a diagonal line on the terminal
 * @n: int
 * Return: void
 */

void print_diagonal(int n)
{
	int a = 0;
	int b = 0;

	if (n > 0)
	{
		while (n > 0)
		{
			a = b;
			while (a > 0)
			{
				_putchar(' ');
				a--;
			}
			_putchar('\\');
			_putchar('\n');
			n--;
			b++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
