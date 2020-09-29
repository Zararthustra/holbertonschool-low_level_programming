#include "holberton.h"

/**
 * print_rev - prints a string, in reverse
 * @s: string
 * Return: void
 */

int _strlen(char *s)
{
	int a = 0;

	while (*s++)
	{
		a++;
	}
	return (a);
}

void print_rev(char *s)
{
	int length;

	length = _strlen(s);
	while (*s != '\0')
	{
		s++;
	}
	while (length-- >= 0)
	{
		_putchar(*s--);
	}
	_putchar('\n');
}
