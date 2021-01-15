#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 *
 * @size : size of the array
 *
 * Return: a pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	hash_node_t **new;

	if (size == 0)
		return (NULL);

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);
	ht->size = size;
	new = calloc(size, sizeof(hash_node_t *));
	if (new == NULL)
	{
		free(ht);
		return (NULL);
	}
	ht->array = new;
	return (ht);
}
