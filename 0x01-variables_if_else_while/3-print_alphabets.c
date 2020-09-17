#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char n = 'a';
	char N = 'A';

	while (n <= 'z')
	{
		putchar(n++);
	}
	while (N <= 'Z')
	{
		putchar(N++);
	}
	{
		putchar('\n');
	}
	return (0);
}
