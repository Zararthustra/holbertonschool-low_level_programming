#include "holberton.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: string
 * Return: char *
 */

char *cap_string(char *s)
{
	char sep[13] = " \t\n,;.!?\"(){}";
	int a;
	int n;

	a = 0;
	while (s[a])
	{
		n = 0;
		while (sep[n])
		{
			if ((a == 0 || s[a - 1] == sep[n]) && (s[a] >= 'a' && s[a] <= 'z'))
			{
				s[a] = s[a] - 32;
			}
			n++;
		}
		a++;
	}
	return (s);
}
