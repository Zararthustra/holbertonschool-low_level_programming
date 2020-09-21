#include "holberton.h"

/**
 * _isalpha - checks for alphabetic character lower or upper
 * @c: int
 * Return: 1 if c is a letter, other 0
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
