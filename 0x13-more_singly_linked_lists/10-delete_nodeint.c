#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t linked list
 * @head: head node
 * @index: index to del
 * Return: 1 if success, -1 if not
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node;

	node = get_nodeint_at_index(*head, index);
	if (node && head)
	{
		free(node);
		return (1);
	}
	else
		return (-1);
}
