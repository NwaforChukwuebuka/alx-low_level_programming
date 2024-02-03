/*
 * File: 4-hash_table_get.c
 * Auth: Brennan D Baraban
*/

#include "hash_tables.h"

/**
 * hash_table_get - Retrieve the value associated with
 *                  a key in a hash table.
 * @ht: A pointer to the hash table (ht).
 * @key: Given key
 *
 * Return: NULL if not matched
 *         Else - the value associated with key in ht.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *Node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	Node = ht->array[index];
	while (Node != NULL && strcmp(Node->key, key) != 0)
		Node = Node->next;
	if (Node == NULL)
		return (NULL);
	return (Node->value);
}
