#include "holberton.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: Always 0.
 */

void times_table(void)
{
	int a;
	int b;
	int n;

	a = 0;
	while (a < 10)
	{
		b = 0;
		while (b < 10)
		{
			n = a * b;
			if (n < 10 && b != 0)
				_putchar(' ');
			if (n >= 10)
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
			else if (n < 10)
			{
				_putchar(n + '0');
			}

			if (b < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar('\n');
			}
		b++;
		}
	a++;
	}
}
