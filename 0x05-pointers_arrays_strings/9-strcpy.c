#include "holberton.h"

/**
 * _strcpy - copies the string pointed to by src
 * @src: source
 * @dest: dest
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int a = 0;

	while (src[a])
	{
		dest[a] = src[a];
		a++;
	}
	return (dest);
}
