#include "holberton.h"

/**
 * get_bit - returns the values of a bit at a given index
 * @n: number
 * @index: index
 * Return: bit value
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int res;

	if (index < 0)
		return (-1);
	res = n >> index;

	if (res & 1)
		return (1);
	else if (res | 1)
		return (0);
	else
		return (-1);
}
