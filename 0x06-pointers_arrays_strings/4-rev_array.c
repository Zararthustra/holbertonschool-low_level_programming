#include "holberton.h"

/**
 * reverse_array - reverses the content of an array of int
 * @a: array of int
 * @n: int to swap
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	j = n - 1;
	while (i < n && i < j)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
		j--;
		i++;
	}
}
