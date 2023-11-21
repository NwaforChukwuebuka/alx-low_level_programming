#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: the head of the linked list
 * Return: the number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t count;

	count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
