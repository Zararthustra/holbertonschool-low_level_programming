#include "holberton.h"

/**
 * _strncat - concatenates 2 strings
 * @dest: destination
 * @src: source
 * @n: int
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	a = 0;
	while (dest[a])
	{
		a++;
	}
	b = 0;
	while (src[b] && b < n)
	{
		dest[a] = src[b];
		b++;
		a++;
	}
	return (dest);
}
