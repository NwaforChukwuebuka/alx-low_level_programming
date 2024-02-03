/*
 * File: 2-key_index.c
 * Auth: Nwafor Chukwuebuka
*/

#include "hash_tables.h"

/**
 * key_index – The index to find from the array
 *             stored in array of a hash table.
 * @key: Given key
 * @size: The size of the array of the hash table.
 *
 * Return: The index of the key.
 *
 * Description: Uses the djb2 algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
