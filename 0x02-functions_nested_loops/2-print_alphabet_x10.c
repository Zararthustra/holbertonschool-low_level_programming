#include "holberton.h"

/**
 * print_alphabet_x10 - print the alphabet
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	int n = 0;
	int a = 'a';

	while (n < 10)
	{
		a = 'a';
		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
	_putchar('\n');
	n++;
	}
}
