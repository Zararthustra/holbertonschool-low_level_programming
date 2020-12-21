#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head nodes data (n)
 * @head: head node
 * Return: head node's data (n)
 */
int pop_listint(listint_t **head)
{
	int stored_n;
	listint_t *node;
	listint_t *next;

	node = *head;
	if (*head == NULL)
		return (0);
	next = node->next;
	stored_n = node->n;
	free(node);
	*head = next;
	return (stored_n);
}
