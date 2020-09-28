#include "holberton.h"

/**
 * swap_int - swap value of 2 ints
 *
 * @a: int a
 * @b: int b
 * return void
 */

void swap_int(int *a, int *b)
{
	int p = *a;
	int q = *b;
	*b = p;
	*a = q;
}
