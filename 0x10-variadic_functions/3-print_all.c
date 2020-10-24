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
	char *tmp = va_arg(arg, char *);
	if (tmp == NULL)
		tmp = "(nil)";
	printf("%s", tmp);
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
	char *separator = "";

	va_start(all_format, format);
	i = 0;
	while (format[i])
	{
		j = 0;
		while (types[j].format)
		{
			if (format[i] == types[j].format[0])
			{
				printf("%s", separator);
				separator = ", ";
				types[j].f(all_format);
			}
			j++;
		}
		i++;
	}
	va_end(all_format);
	printf("\n");
}
