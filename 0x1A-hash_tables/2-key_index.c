#include "hash_tables.h"

/**
 * key_index - gives the index of a key
 *
 * @key : key string
 * @size: size of the array
 *
 * Return: hash code
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int i;

	i = hash_djb2(key) % size;
	return (i);
}
