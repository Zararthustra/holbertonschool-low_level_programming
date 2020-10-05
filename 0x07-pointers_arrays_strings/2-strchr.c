#include "holberton.h"

/**
 * _strchr - locates a char in a string
 * @s: string
 * @c: char
 * Return: c if its found, else NULL
 */

char *_strchr(char *s, char c)
{
	int a;
	char *res = 0;

	a = 0;
	while (s[a])
	{
		if (s[a] == c)
		{
			res = &s[a];
			break;
		}
		a++;
	}
	return (res);
}
