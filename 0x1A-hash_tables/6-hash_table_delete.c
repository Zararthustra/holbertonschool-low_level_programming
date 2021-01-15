
#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 *
 * @ht: hash table
 *
 * Return: Void
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp, *next;
	unsigned int i;

	i = 0;
	while (i < ht->size)
	{
		tmp = (ht->array)[i];
		while (tmp)
		{
			next = tmp->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
			tmp = next;
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
