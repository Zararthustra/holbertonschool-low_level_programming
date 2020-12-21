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

	if (index > 64)
		return (-1);

	res = n >> index;
	if (res & 1)
		return (1);
	else
		return (0);
}
