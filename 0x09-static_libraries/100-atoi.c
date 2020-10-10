#include "holberton.h"

/**
 * _atoi - convert
 * @s: string
 * Retrun: value
 */

int _atoi(char *s)
{
	int i = 0, sign = 0, res = 0;

	while (s[i] && (!(s[i] >= '0') || !(s[i] <= '9')))
	{
		if (s[i] == '-')
			sign++;
		i++;
	}
	sign = (sign % 2) ? -1 : 1;
	while (s[i] && ((s[i] >= '0') && (s[i] <= '9')))
		res = res * 10 + (s[i++] - '0') * sign;
	return (res);
}
