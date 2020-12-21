#include "holberton.h"

/**
 * more_numbers -  prints 10 times the numbers, from 0 to 14
 *
 * Return: void
 */

void more_numbers(void)
{
	int n = 0;
	int a;

	while (n <= 9)
	{
		a = 0;
		while (a <= 14)
		{
			if (a > 9)
			{
				_putchar((a / 10) + '0');
			}
			_putchar((a % 10) + '0');
			a++;
		}
		_putchar('\n');
		n++;
	}
}
