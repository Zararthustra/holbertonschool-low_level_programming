#include "holberton.h"

/**
 * print_last_digit -  prints the last digit of a number
 * @n: int
 * Return: last digit value
 */

int print_last_digit(int n)
{
	int a = n % 10;

	if (a < 0)
	{
		a = a * (-1);
	}
	_putchar(a + '0');
	return (a);
}
