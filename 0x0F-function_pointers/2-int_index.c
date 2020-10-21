#include "function_pointers.h"

/**
 * int_index - searches for an int
 * @array: array
 * @size: size of array
 * @cmp: pointer to the function used
 * Return: index, else -1 if no match or size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	i = 0;
	while (i < size)
	{
		if (cmp(array[i]))
			return (i);
		i++;
	}
	return (-1);
}
