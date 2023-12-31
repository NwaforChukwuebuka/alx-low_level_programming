#include <stddef.h>
#include "lists.h"

/**
 * print_list - print the data in the nodes of the singly linked list
 * @h: a pointer to the head of the node
 * Return: the size of the linked list
 */

size_t print_list(const list_t *h)
{
	size_t count;

	count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}

		h = h->next;
		count++;
	}
	return (count);
}
