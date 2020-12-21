#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: first node
 * @n: int
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *end_node;

	new_node = malloc(sizeof(listint_t));
	end_node = *head;
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (end_node->next != NULL)
			end_node = end_node->next;
		end_node->next = new_node;
	}
	return (new_node);
}
