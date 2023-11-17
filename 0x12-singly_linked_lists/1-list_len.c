#include "lists.h"
#include <stdlib.h>

/**
 * list_len - prints the number of nodes or elementa
 * @h: the head pointer to the linked list
 * Return: nmuber of elments in the linked list
 */

size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
