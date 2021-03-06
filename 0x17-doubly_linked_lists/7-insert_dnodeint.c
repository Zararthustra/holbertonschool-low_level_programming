#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: head
 * @idx: index to add
 * @n: data
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *back;
	unsigned int len;
	unsigned int i;

	len = dlistint_len(*h);
	if (len < idx)
		return (NULL);
	back = *h;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	else if (idx == 0)
	{
		new = add_dnodeint(h, n);
		return (new);
	}
	else
	{
		i = 0;
		idx -= 1;
		while (i != idx)
		{
			back = back->next;
			i++;
		}
		new->prev = back;
		new->n = n;
		new->next = back->next;
		back->next = new;
		return (new);
	}
	return (NULL);

}

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
