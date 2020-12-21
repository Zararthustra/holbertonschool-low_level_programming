#include "holberton.h"

/**
 * print_numbers - prints the numbers from 0 to 9
 *
 * Return: void
 */

void print_numbers(void)
{
	int a = '0';

	while (a <= '9')
	{
		_putchar(a++);
	}
	_putchar('\n');
}
