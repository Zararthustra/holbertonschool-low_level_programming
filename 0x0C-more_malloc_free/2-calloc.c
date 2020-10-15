#include "holberton.h"
#include <stdlib.h>

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

/**
 * _calloc -  allocates memory for an array, using malloc
 * @nmemb: n memory
 * @size: size of array
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *a;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	a = malloc((nmemb + size) * sizeof(unsigned int));
	if (a == NULL)
		return (NULL);
	_memset(a, 0, size * nmemb);
	return (a);
}
