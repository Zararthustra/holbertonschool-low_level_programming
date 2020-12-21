#include "holberton.h"

/**
 * print_number - prints a number
 * @n: int to print
 * Return: void
 */

void print_number(int n)
{
	int pow;
	unsigned int tmp;
	int a;

	pow = 1;
	if (n < 0)
	{
		_putchar('-');
		tmp = -n;
	}
	else
	{
		tmp = n;
	}
	while (tmp / pow > 9)
	{
		pow = pow * 10;
	}
	while (tmp > 9)
	{
		_putchar((tmp / pow) + '0');
		a = (tmp / pow) * pow;
		tmp = tmp - a;
		pow = pow / 10;
	}
	_putchar(tmp + '0');
}
