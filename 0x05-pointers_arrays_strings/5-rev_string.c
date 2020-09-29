#include "holberton.h"

/**
 * dswap_int - swap value of 2 ints
 *
 * @a: int a
 * @b: int b
 * return void
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
