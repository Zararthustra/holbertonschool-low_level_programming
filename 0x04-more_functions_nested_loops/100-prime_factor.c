#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

int main(void)
{
	long int n = 612852475143;
	int x = 2;

	while (x < n)
	{
		while (n % x == 0)
		{
			n = n / x;
		}
		x++;
	}
	printf("%d\n", x);
	return (0);
}
