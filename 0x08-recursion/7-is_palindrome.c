#include "holberton.h"
#include <stdio.h>

/**
 * _strlen_recursion - returns the length of a string
 * @s: string
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (_strlen_recursion(s + 1) + 1);
	}
	return (0);
}

/**
 * check_pal - checks palindrome
 * @s: string
 * @i: starting
 * @j: ending
 * Return: 1 if pal, else 0
 */

int check_pal(char *s, int i, int j)
{
	if (s[i] != s[j - i])
		return (0);
	else if (i == ((j + 1)/ 2))
		return (1);
	else	
	return (check_pal(s, ++i, j));
}

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: string
 * Return: 1 if palindrome, else 0
 */

int is_palindrome(char *s)
{
	int _strlen = _strlen_recursion(s) - 1;

	if (_strlen <= 0)
		return (1);
	return (check_pal(s, 0, _strlen));
}
