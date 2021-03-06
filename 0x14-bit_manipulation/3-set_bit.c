#include "holberton.h"

/**
 * set_bit - returns the value of a bit at a given index
 * @n: value
 * @index: index
 * Return: value
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index <= 63)
	{
		*n = (*n | (1 << index));
		return (1);
	}
	return (-1);
}
