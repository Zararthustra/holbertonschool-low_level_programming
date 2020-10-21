#include "function_pointers.h"

/**
 * array_iterator - executes action on each element of array
 * @array: array
 * @size: size of array
 * @action: pointer to the function used
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	i = 0;
	while (i < size)
	{
		(*action)(array[i]);
		i++;
	}
}
