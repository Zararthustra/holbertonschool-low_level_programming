#include "holberton.h"

/**
 * _isupper - checks for uppercase character
 * @c: int
 * Return: 1 if c is uppercase, else 0
 */

int _isupper(int c)
{
	if (c <= 90 && c >= 65)
	{
	return (1);
	}
	else if (c <= 122 && c >= 97)
	{
	return (0);
	}
	return (0);
}
