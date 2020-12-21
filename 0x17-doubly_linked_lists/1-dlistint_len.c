#include "lists.h"

/**
 * dlistint_len - returns the number of elements in list
 * @h: head
 * Return: number of elem
 */

size_t dlistint_len(const dlistint_t *h)
{
	int i;

	i = 0;
	while (h)
	{
		h = h->next;
		i++;
	}
	while (h)
	{
		h = h->prev;
		i++;
	}
	return (i);
}
