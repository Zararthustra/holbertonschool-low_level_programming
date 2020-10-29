#ifndef LINKED_LISTS_H
#define LINKED_LISTS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * list_s - linked list node
 * @str: string
 * @len: length
 * @next: pointer to next node
 */

typedef struct list_s
{
	char *str;
	int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
int _strlen(const char *s);

#endif
