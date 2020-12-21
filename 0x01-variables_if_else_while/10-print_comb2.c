#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;

	while (n < 100)
	{
		putchar('0' + (n / 10));
		putchar('0' + (n % 10));

		if (n < 99)
		{
			putchar(',');
			putchar(' ');
		}
	n++;
	}
	putchar('\n');
	return (0);
}
