#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size : size of array
 * @c: specific char
 * Return: pointer to the array, else NULL
 */

char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *array = malloc(size * sizeof(char));

	if (size == 0)
		return (NULL);
	a = 0;
	while (a < size)
	{
		array[a] = c;
		a++;
	}
	return (array);
}
