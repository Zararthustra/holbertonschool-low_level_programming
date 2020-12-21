#include "holberton.h"

/**
 * swap_char - swap value of 2 chars
 *
 * @a: char a
 * @b: char b
 * Return: void
 */

void swap_char(char *a, char *b)
{
	int p = *a;
	int q = *b;
	*b = p;
	*a = q;
}

/**
 * rev_string - reverses a string
 * @s: string
 * Return: void
 */

void rev_string(char *s)
{
	int a = 0;
	int b = 0;

	while (s[a])
	{
		a++;
	}
	a--;
	while (a > b)
	{
		swap_char(&s[a], &s[b]);
		a--;
		b++;
	}
}
