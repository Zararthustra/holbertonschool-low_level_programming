#include <stdio.h>
#include "holberton.h"

/**
 * print_alphabet - Function to print the alphabet
 *
 * Return: Always 0
 */

void print_alphabet(void)
{
	int n = 'a';

	while (n <= 'z')
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
