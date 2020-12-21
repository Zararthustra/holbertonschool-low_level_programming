#include "holberton.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: int
 * @y: int pow
 * Return: -1 if y < 0, 1 if y = 0, else x
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, (y - 1)));
}
