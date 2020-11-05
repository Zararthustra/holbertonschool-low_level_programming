#include "holberton.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary number
 * Return: unsigned int, else 0
 */

unsigned int binary_to_uint(const char *b)
{
	int decimal;
	int weight;
	int reminder;
	int binary;
	int i;

	i = 0;
	weight = 1;
	decimal = 0;
	if (b == NULL)
		return (0);
	while (b[i])
		i++;
	i--;
	while (i >= 0)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		binary = b[i] - 48;
		reminder = binary % 10;
		decimal = decimal + reminder * weight;
		binary = binary / 10;
		weight = weight * 2;
		i--;
	}
	return (decimal);
}
