#include "holberton.h"

/**
 * leet - encodes a string into 1337
 * @s: string
 * Return: char *
 */

char *leet(char *s)
{
	char a[5] = {'a', 'e', 'o', 't', 'l'};
	char b[5] = {'4', '3', '0', '7', '1'};
	int c;
	int d;

	c = 0;
	while (s[c])
	{
		d = 0;
		while (d < 5)
		{
			if (s[c] == a[d] || s[c] == a[d] - 32)
			{
				s[c] = b[d];
			}
			d++;
		}
		c++;
	}
	return (s);
}
