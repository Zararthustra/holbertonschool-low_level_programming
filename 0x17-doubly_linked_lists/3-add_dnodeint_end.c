#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of list
 * @head: head
 * @n: data
 * Return: the address of the new elem or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *end;

	end = *head;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (end->next != NULL)
			end = end->next;
		new->prev = end;
		end->next = new;
	}
	return (new);
}
