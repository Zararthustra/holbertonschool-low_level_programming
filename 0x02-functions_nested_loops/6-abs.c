#include "holberton.h"

/**
 * _abs -  get the absolute value of an integer
 * @n: int
 * Return: n, -n if negtive
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (-n);
	}
}
