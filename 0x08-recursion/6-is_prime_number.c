#include "holberton.h"

/**
 * factor_update - update factor a if b isnt a prime
 * @a: factor to update
 * @b: potential prime
 * Return: 1 if prime, else 0
 */

int factor_update(int a, int b)
{
	if (a == b)
		return (1);
	if (b % a == 0)
		return (0);
	return (factor_update(a + 1, b));
}

/**
 * is_prime_number -  returns 1 if the input integer
 * is a prime number, otherwise return 0.
 * @n: number
 * Return: 1 if prime, else 0
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (factor_update(2, n));
}
