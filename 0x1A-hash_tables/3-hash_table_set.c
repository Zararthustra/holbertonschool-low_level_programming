#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 *
 * @ht: created hash table
 * @key: key can not be an empty string
 * @value:  value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	hash_node_t *tmp;
	int i;
	int len = strlen(key);

	if (ht == NULL || key == NULL || value == NULL || len == 0)
		return (0);

	i = key_index((unsigned char *)key, ht->size);
	tmp = ht->array[i];
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (1);
		}
		tmp = tmp->next;
	}

	tmp = ht->array[i];
	new = malloc(sizeof(hash_node_t));

	if (new == NULL)
		return (0);

	new->key = strdup(key);
	new->value = strdup(value);
	new->next = tmp;
	ht->array[i] = new;
	return (1);
}
