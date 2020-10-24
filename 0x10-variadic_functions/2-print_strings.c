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
	va_list strings;

	va_start(strings, n);
	i = 0;
	while (i < n)
	{
		if (strings == NULL)
			printf("%p", va_arg(strings, char *));
		else
			printf("%s", va_arg(strings, char *));
		if (i < n - 1 && separator != NULL)
		printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(strings);
}
