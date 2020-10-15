#include "holberton.h"
#include <stdlib.h>

/**
 * array_range -  creates an array of integers
 * @min: min
 * @max: max
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *a;
	int i;

	if (min > max)
		return (NULL);
	a = malloc((max - min + 1) * sizeof(int));
	if (a == NULL)
		return (NULL);
	i = 0;
	while (i <= max && min <= max)
	{
		a[i] = min;
		i++;
		min++;
	}
	return (a);
}
