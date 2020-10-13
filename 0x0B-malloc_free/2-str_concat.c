#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

/**
 * _strlen - returns length of a string
 * @s: string
 * Return: length size
 */

int _strlen(char *s)
{
	int a = 0;

	if (s == NULL)
	{
		return (0);
	}
	while (*s++)
	{
		a++;
	}
	return (a);
}

/**
 * str_concat - concat two strings
 * @s1: string 1
 * @s2: string 2
 * Return: s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	int len1;
	int len2;
	char *s;
	int a;
	int b;

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	s = malloc((len1 + len2 + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	a = 0;
	if (s1 != NULL)
	{
		while (s1[a])
		{
			s[a] = s1[a];
			a++;
		}
	}
	b = 0;
	if (s2 != NULL)
	{
		while (s2[b])
		{
			s[a] = s2[b];
			a++;
			b++;
		}
	}
	s[a] = '\0';
	return (s);
}
