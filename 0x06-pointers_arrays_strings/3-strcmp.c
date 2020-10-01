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
 * _strcmp - compares 2 strings
 * @s1: string 1
 * @s2: string 2
 * Return: -15 if s1 < s2,
 * 15 if s1 > s2,
 * 0 if s1 = s2.
 */

int _strcmp(char *s1, char *s2)
{
	int p = _strlen(s1);
	int q = _strlen(s2);

	if (p < q)
	{
		return (-15);
	}
	else if (p > q)
	{
		return (15);
	}
	else
	return (0);
}
