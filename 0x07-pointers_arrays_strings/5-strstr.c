#include "holberton.h"

/**
 * _strstr - locates a substring
 * @haystack: string dest
 * @needle: string source
 * Return: pointer to the beginning of the located
 * substring, or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int a;
	int b;
	int tmp;

	a = 0;
	while (haystack[a])
	{
		b = 0;
		tmp = a;
		while (needle[b] == haystack[a])
		{
			return (&haystack[tmp]);
			b++;
		}
		a++;
	}
	return (0);
}
