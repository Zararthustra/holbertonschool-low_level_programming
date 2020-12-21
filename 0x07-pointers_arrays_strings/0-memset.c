#include "holberton.h"

/**
 * _memset - fills memory with a constant byte
 * @s: string
 * @b: char
 * @n: unsigned int
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	a = 0;
	while (a < n)
	{
		s[a] = b;
		a++;
	}
	return (s);
}
