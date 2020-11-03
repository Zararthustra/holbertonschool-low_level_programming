#include "lists.h"

/**
 * free_listint2 - frees a linstint_t list
 * @head: head node
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;
	listint_t *next;

	if (head == NULL)
		return;
	next = *head;
	while (next != NULL)
	{
		tmp = next;
		next = next->next;
		free(tmp);
	}
	*head = NULL;
}
