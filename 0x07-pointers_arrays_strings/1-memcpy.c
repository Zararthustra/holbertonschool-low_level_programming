#include "holberton.h"

/**
 * _memcpy - copies memory area
 * @dest: destination
 * @src: source
 * @n: uns int
 * Return: point to destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	a = 0;
	while (a < n)
	{
		dest[a] = src[a];
		a++;
	}
	return (dest);
}
