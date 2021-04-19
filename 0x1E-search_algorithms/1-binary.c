#include "search_algos.h"


/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: pointer to a given array
 * @size: size of given array
 * @value: searched value
 * Return: index value if succeed, otherwise -1
 */
int binary_search(int *array, size_t size, int value)
{
	unsigned int index, mid;
	int i;

	if (array == NULL || size < 1)
		return (-1);

	if (size == 1 && array[0] == value)
		return (array[0]);

	printf("Searching in array: ");
	for (index = 0; index < (size - 1); index++)
		printf("%d, ", array[index]);
	printf("%d\n", array[index]);

	mid = (size - 1) / 2;
	i = 0;

	if (array[mid] == value)
		return (mid);
	else if (array[mid] > value)
		return (binary_search(array, mid, value));
	else if (array[mid] < value)
	{
		mid += 1;
		i = (binary_search(&array[mid], size - mid, value));
		if (i == -1)
			return (-1);
		return (mid + i);
	}
	return (-1);
}
