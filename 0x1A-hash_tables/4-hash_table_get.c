#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 *
 * @ht: hash table
 * @key: key
 *
 * Return: value if succeeded, NULL otherwise
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp;
	int i;
	int len = strlen(key);

	if (ht == NULL || key == NULL || len == 0)
		return (NULL);

	i = key_index((unsigned char *)key, ht->size);
	tmp = (ht->array)[i];
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}
