#include "holberton.h"

/**
 * _strncpy : copies a string
 * @dest: destination
 * @src: source
 * @n: int
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;
	int b;

	a = 0;
	b = 0;
	while (dest[a] && b < n)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	return (dest);
}
