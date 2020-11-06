#include "holberton.h"

/**
 * flip_bits - returns the number of bits
 * needed to flip to get from one number to another
 * @n : num1
 * @m : num2
 * Return: number of bits flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	while ((n >> i || m >> i) && i < 64)
	{
		j = j + (1 & ((n >> i) ^ (m >> i)));
		i++;
	}

	return (j);
}
