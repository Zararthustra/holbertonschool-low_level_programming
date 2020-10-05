#include "holberton.h"
#include <stdio.h>

/**
 * _strchr - locates a char in a string
 * @s: string
 * @c: char
 * Return: c if its found, else NULL
 */

char *_strchr(char *s, char c)
{
	int a = 0;
	char *res = NULL;

	while (s[a])
	{
		if (s[a] == c)
		{
			return (&s[a]);
		}
		a++;
	}
	return (res);
}
