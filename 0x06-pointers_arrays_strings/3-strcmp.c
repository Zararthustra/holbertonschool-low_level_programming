#include "holberton.h"

/**
 * _strcmp - compares 2 strings
 * @s1: string 1
 * @s2: string 2
 * Return: difference between 2 strings
 */

int _strcmp(char *s1, char *s2)
{
	int a = 0;

	while (s1[a] && s2[a] && s1[a] == s2[a])
	{
		a++;
	}
	return (s1[a] - s2[a]);
}
