#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints n strings
 * @separator: separator
 * @n: n strings
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *tmp;
	va_list strings;

	va_start(strings, n);
	i = 0;
	while (i < n)
	{
		tmp = va_arg(strings, char *);
		if (tmp != NULL)
			printf("%s", tmp);
		else
		{
			printf("%p", tmp);
		}
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(strings);
}
