#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index
 * @head: head
 * @index: index to rm
 * Return: 1 if success, -1 if failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *del;
	dlistint_t *back;
	unsigned int i;

	if (!*head)
		return (-1);
	if (index == 0)
	{
		del = *head;
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(del);
		return (1);
	}
	del = *head;
	i = 0;
	while (del)
	{
		if (index == i)
		{
			if (del == NULL)
				return (-1);
			back->next = del->next;
			(del->next)->prev = back->next;
			free(del);
			return (1);
		}
		back = del;
		del = del->next;
		i++;
	}
	return (-1);
}
