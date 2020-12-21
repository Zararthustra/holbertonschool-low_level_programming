#include "holberton.h"

/**
 * _strlen - returns length of string
 * @s: string
 * Return: string length
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

/**
 * print_rev - prints a string, in reverse
 * @s: string
 * Return: void
 */

void print_rev(char *s)
{
	int length;

	length = _strlen(s);
	while (*s)
	{
		s++;
	}
	while (length-- > 0)
	{
		_putchar(*--s);
	}
	_putchar('\n');
}
