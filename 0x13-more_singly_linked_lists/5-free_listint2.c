#include "lists.h"

/**
 * free_listint - frees a linstint_t list
 * @head: head node
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *node;
	listint_t *next;

	node = *head;
	while (node != NULL)
	{
		next = node->next;
		free(node);
		node = next;
	}
	head = NULL;
}
