#include "holberton.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string
 * @accept: matching string
 * Return: pointer to the byte in s that matches one
 * of the bytes in accept, or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int a;
	int b;

	a = 0;
	while (s[a])
	{
		b = 0;
		while (accept[b])
		{
			if (s[a] == accept[b])
			{
				return (&s[a]);
			}
			b++;
		}
		a++;
	}
	return (0);
}
