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
	char * tmp = 0;

	a = 0;
	while (haystack[a])
	{
		b = 0;
		*tmp = haystack[a];
		while (needle[b] == haystack[a] && needle[b])
		{
			return (tmp);
			b++;
		}
		a++;
	}
	return (0);
}
