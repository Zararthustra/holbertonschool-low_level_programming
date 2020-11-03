#include "lists.h"

/**
 * free_listint - frees a linstint_t list
 * @head: head node
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;
	listint_t *next;

	next = *head;
	while (next != NULL)
	{
		tmp = next;
		free(tmp);
		next = next->next;
	}
	*head = NULL;
}
