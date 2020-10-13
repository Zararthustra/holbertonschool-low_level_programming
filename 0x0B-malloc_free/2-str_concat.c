#include "holberton.h"
#include <stdlib.h>

/**
 * _strlen - returns length of a string
 * @s: string
 * Return: length size
 */

int _strlen(char *s)
{
	int a = 0;

	while (*s++)
	{
		a++;
	}
	return (a);
}

/**
 * _strcat - concat 2 strings
 * @dest: destination string
 * @src: source string
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	a = 0;
	while (dest[a])
	{
		a++;
	}
	b = 0;
	while (src[b])
	{
		dest[a] = src[b];
		b++;
		a++;
	}
	dest[a] = '\0';
	return (dest);
}

/**
 * str_concat - concat two strings
 * @s1: string 1
 * @s2: string 2
 * Return: s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	int len1;
	int len2;
	char *s;
	int a;
	int b;

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	s = malloc((len1 + len2 + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	a = 0;
	while (s1[a])
	{
		s[a] = s1[a];
		a++;
	}
	b = 0;
	while (s2[b])
	{
		s[a] = s2[b];
		a++;
		b++;
	}
	return (s);
}
