#include "holberton.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: chars to accept in the string
 * Return: n bytes from s according to accepted chars
 */

unsigned int _strspn(char *s, char *accept)
{
	int a;
	int b;
	int c = 0;

	a = 0;
	while (s[a])
	{
		b = 0;
		while (accept[b])
		{
			if (s[a] == accept[b] && c == a)
			{
				c++;
			}
			b++;
		}
		a++;
	}
	return (c);
}
