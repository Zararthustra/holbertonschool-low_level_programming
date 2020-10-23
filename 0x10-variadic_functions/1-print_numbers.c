#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints n numbers
 * @separator: separate each nums
 * @n: number of numbers
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;

	va_start (numbers, n);
	i = 0;
	while (i < n)
	{
		printf("%d", va_arg (numbers, int));
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
		i++;
	}
	printf("\n");
	va_end (numbers);
}
