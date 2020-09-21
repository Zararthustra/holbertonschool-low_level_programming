#include "holberton.h"

/**
 * _islower - checks for lowercase character
 * @c: int
 * Return: 1 for lowercase, else 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
