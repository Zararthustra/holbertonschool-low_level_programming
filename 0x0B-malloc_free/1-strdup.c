#include "holberton.h"
#include <stdlib.h>

/**
 *  * _strlen - returns length of a string
 *   * @s: string
 *    * Return: length size
 *     */

int _strlen(char *s)
{
	int a = 0;

	while (*s++)
	{
		a++;
	}
	return (a);
}

/**
 *  * _strcpy - copies the string pointed to by src
 *   * @src: source
 *    * @dest: dest
 *     * Return: dest
 *      */

char *_strcpy(char *dest, char *src)
{
	int a = 0;

	while (src[a])
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = '\0';
	return (dest);
}

/**
 * _strdup - returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as a parameter
 * @str: string
 * Return: pointer
 */

char *_strdup(char *str)
{
	char *s;
	int len = _strlen(str + 1);

	if (str == NULL)
		return (NULL);
	s = malloc(len * sizeof(char));
	_strcpy(s, str);
	if (s == NULL)
		return (NULL);
	return (s);
	free (s);
}
