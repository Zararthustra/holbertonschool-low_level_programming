#include "holberton.h"

/**
 * puts2 - prints odd index
 * @str: string
 * Return: void
 */

void puts2(char *str)
{
	int a = 0;

	while (str[a])
	{
		if (a % 2 == 0)
		{
			_putchar(str[a]);
		}
		a++;
	}
	_putchar('\n');
}
