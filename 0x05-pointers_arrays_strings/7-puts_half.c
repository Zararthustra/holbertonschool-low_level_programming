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
	int len = _strlen(str);

	if (len % 2 != 0)
	{
		len = len + 1;
	}
	len = len / 2;
	while (str[len])
	{
		_putchar(str[len]);
		len++;
	}
	_putchar('\n');
}

