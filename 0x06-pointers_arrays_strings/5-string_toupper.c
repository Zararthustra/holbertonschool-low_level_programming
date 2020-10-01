#include "holberton.h"

/**
 * string_toupper - changes all lowercase to uppercase.
 * @str: sting
 * Return: string
 */

char *string_toupper(char *str)
{
	int a;

	a = 0;
	while (str[a])
	{
		if (str[a] >= 97 && str[a] <= 122)
		{
			str[a] = str[a] - 32;
		}
		a++;
	}
	return (str);
}
