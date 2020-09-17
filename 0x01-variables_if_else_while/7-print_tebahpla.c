#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char n = 'z';

	while (n >= 'a')
	{
		putchar(n--);
	}
	{
		putchar('\n');
	}
	return (0);
}
