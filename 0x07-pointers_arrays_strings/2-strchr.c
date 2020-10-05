#include "holberton.h"

/**
 * strchr - locates a char in a string
 * @s: string
 * @c: char
 * Return: c if its found, else NULL
 */

char *_strchr(char *s, char c)
{
	int a;

	a = 0;
	while (s[a])
	{
		if (s[a] == c)
		{
			return (s + a);
		}
		a++;
	}
	return ('\0');
}
