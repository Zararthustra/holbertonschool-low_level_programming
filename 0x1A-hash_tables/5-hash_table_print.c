#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 *
 * @ht: hash table
 *
 * Return: Void
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp;
	unsigned int i;
	int comma;


	if (ht == NULL)
		return;

	printf("{");
	i = 0;
	comma = 1;
	while (i < ht->size)
	{
		tmp = (ht->array)[i];
		while (tmp)
		{
			if (comma == 0)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			comma = 0;
			tmp = tmp->next;
		}
		i++;
	}
	printf("}\n");

}
