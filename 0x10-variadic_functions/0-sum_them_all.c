#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sums all the parameters
 * @n: number of parameters
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0;
	va_list args;
	unsigned int i;

	va_start (args, n);
	i = 0;
	while (i < n)
	{
		sum = sum + (unsigned int) va_arg (args, int);
		i++;
	}
	va_end (args);
	return (sum);
}
