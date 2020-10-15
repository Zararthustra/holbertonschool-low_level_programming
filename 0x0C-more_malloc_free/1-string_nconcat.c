#include "holberton.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * string_nconcat - cat two strings
 * @s1: string1
 * @s2: string2
 * @n: bytes added
 * Return: string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i;
	unsigned int j;
	unsigned int len1;
	unsigned int len2;

	len1 = strlen(s1);
	len2 = strlen(s2);
	if (n >= len2)
		s = malloc((len1 + len2) + 1 * sizeof(char));
	if (n < len2)
		s = malloc((len1 + n) + 1 * sizeof(char));
	if (s == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		s[i] = s1[i];
		i++;
	}
	j = 0;
	while (i < (len1 + len2) && j < n)
	{
		s[i] = s2[j];
		i++;
		j++;
	}
	s[i] = '\0';
	return (s);
}
