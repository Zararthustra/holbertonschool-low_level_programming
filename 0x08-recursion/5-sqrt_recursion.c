#include "holberton.h"

/**
 * _update_sqrt - update sqrt of n if sqrt n * sqrt n != n
 * @a: square root of n
 * @n: number
 * Return: -1 if a*a > n, a if a*a = 0, a updated if a*a < n
 */

int _update_sqrt(int a, int n)
{
	if (a * a > n)
		return (-1);
	if (a * a == n)
		return (a);
	else
		return (_update_sqrt(a + 1, n));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 * Return: -1 if n has no natural sqrt, else sqrt n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_update_sqrt(1, n));
}
