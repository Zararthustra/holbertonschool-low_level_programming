#include "holberton.h"

/**
 * _strlen - returns length of a string
 * @s: string
 * Return: length size
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
 * puts_half - prints half of a string
 * @str: string
 * Return: void
 */

void puts_half(char *str)
{
	int a = 0;
	int b = _strlen(str);

	while (str[a])
	{
		if ((b / 2) <= a)
		{
			_putchar(str[a]);
		}
	a++;
	}
}
