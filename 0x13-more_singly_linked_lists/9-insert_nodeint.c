#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: head node
 * @idx: index
 * @n: data
 * Return: new node or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node;
	listint_t *new_node;
	unsigned int i;

	i = 0;
	node = *head;
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	while (i < idx - 1)
	{
		node = node->next;
		++i;
	}
	new_node->next = node->next;
	node->next = new_node;
	if (new_node == NULL)
		return (NULL);

	return (new_node);
}
