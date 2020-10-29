#include "lists.h"

/**
 * _strlen - returns length of a string
 * @s: string
 * Return: length size
 */

int _strlen(const char *s)
{
	int a = 0;

	while (*s++)
	{
		a++;
	}
	return (a);
}

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: head pointer
 * @str: string to duplicate
 * Return: adddress of new element, else NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = NULL;
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = _strlen(str);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
