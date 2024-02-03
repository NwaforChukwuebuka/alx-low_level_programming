/*
 * File: 5-hash_table_print.c
 * Auth: Nwafor Chukwuebuka
*/

#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: A pointer to the hash table to print.
 *
*/
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *Node;
	unsigned long int i;
	unsigned char set_flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (set_flag == 1)
				printf(", ");

			Node = ht->array[i];
			while (Node != NULL)
			{
				printf("'%s': '%s'", Node->key, Node->value);
				Node = Node->next;
				if (Node != NULL)
					printf(", ");
			}
			set_flag = 1;
		}
	}
	printf("}\n");
}
