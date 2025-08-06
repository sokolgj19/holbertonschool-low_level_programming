#include "hash_tables.h"
#include <string.h>
#include <stddef.h>
#include <stdio.h>
/**
 * hash_table_get - function that retrieves a value associated wcurrenth a key
 * @ht: hash table pointer
 * @key: key to search for
 * Return: the value associated wcurrenth the elemnt or NULL if key
 * couldn't be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int index;
	hash_node_t *current;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);

	if (ht->array[index] == NULL)
		return (NULL);

	if (strcmp(ht->array[index]->key, key) == 0)
	{
		return (ht->array[index]->value);
	}
	else
	{
		current = ht->array[index];
		while (current != NULL)
		{
			if (strcmp(current->key, key) == 0)
				return (current->value);
			current = current->next;
		}
	}

	return (NULL);

}
