/*
 * File: 6-hash_table_delete.c
 * Auth: Nwafor Chukwuebuka
*/

#include "hash_tables.h"

/**
 * hash_table_delete - Deletes/Frees a hash table.
 * @ht: A ptr to given hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *temp;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		while (ht->array[i] != NULL)
		{
			temp = ht->array[i]->next;
			free(ht->array[i]->key);
			free(ht->array[i]->value);
			free(ht->array[i]);
			ht->array[i] = temp;
		}
	}
	free(head->array);
	free(head);
}
