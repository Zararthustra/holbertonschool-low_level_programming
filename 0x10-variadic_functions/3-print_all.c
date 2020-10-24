#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_char - prints a char
 * @arg: argument to print
 * Return: void
 */

void print_char(va_list arg)
{
	printf("%c", va_arg(arg, int));
}

/**
 * print_int - prints an int
 * @arg: argument to print
 * Return: void
 */

void print_int(va_list arg)
{
	printf("%i", va_arg(arg, int));
}

/**
 * print_float - prints a float
 * @arg: argument to print
 * Return: void
 */

void print_float(va_list arg)
{
	printf("%f", va_arg(arg, double));
}

/**
 * print_string - prints a string
 * @arg: argument to print
 * Return: void
 */

void print_string(va_list arg)
{
	printf("%s", va_arg(arg, char *));
}

/**
 * print_all - prints anything
 * @format: c, i, f, s
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list all_format;
	parse_t types[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};
	int i;
	int j;

	va_start(all_format, format);
	i = 0;
	while (format[i])
	{
		j = 0;
		while (types[j].format)
		{
			if (format[i] == types[j].format[0])
			{
				types[j].f(all_format);
				if (format[i + 1] != '\0')
					printf(", ");
			}
			j++;
		}
		i++;
	}
	va_end(all_format);
	printf("\n");
}
