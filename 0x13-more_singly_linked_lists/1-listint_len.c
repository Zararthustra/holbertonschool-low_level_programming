#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: first node
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	int i;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
