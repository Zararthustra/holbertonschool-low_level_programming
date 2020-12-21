#include "holberton.h"

/**
 * rot13 - encodes a string using rot13
 * @s: string
 * Return: char *
 */

char *rot13(char *s)
{
	char a[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[52] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int x;
	int y;

	x = 0;
	while (s[x])
	{
		y = 0;
		while (y < 52)
		{
			if (s[x] == a[y])
			{
				s[x] = b[y];
				break;
			}
			y++;
		}
		x++;
	}
	return (s);
}

