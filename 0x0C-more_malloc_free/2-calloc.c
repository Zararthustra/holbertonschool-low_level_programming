#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc -  allocates memory for an array, using malloc
 * @nmemb: n memory
 * @size: size of array
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *a;
	unsigned int i;
	unsigned int j;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	a = malloc((nmemb + size) * sizeof(unsigned int));
	if (a == NULL)
		return (NULL);
	i = 0;
	while (i < nmemb)
	{
		j = 0;
		while (j < size)
		{
			a[i] = 0;
			j++;
		}
		i++;
	}
	a[i] = '\0';
	return (a);
}
