#ifndef VARIADIC_FUNCTIONS
#define VARIADIC_FUNCTIONS

#include <stdio.h>
#include <stdarg.h>

/**
 * struct parse - parse to get appropriate type
 * @format: c or i or f or s
 * @f: fonction to print the type
 */

typedef struct parse
{
	char *format;
	void (*f)(va_list arg);
} parse_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
