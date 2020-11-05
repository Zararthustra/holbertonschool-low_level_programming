#include "holberton.h"

/**
 * set_bit - returns the value of a bit at a given index
 * @n: value
 * @index: index
 * Return: value
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	int set;

	set = n | (1 << index);
	if (index > 63)
		return (-1);
	return (set);
}
