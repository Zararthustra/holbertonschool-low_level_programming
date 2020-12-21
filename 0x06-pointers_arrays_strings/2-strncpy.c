#include "holberton.h"

/**
 * _strncpy - copies a string
 * @dest: destination
 * @src: source
 * @n: int
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	a = 0;
	while (dest[a] && a < n && src[a])
	{
		dest[a] = src[a];
		a++;
	}
	while (dest[a] && a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
