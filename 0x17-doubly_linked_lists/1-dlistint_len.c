#include "lists.h"

/**
  * dlistint_len - Prints length of the list
  * @h: Ptr to the head of the list
  * Return: Number of nodes in the linked list
  */

size_t dlistint_len(const dlistint_t *h)
{
	size_t nodeCnt;

	nodeCnt = 0;

	while (h)
	{
		h = h->next;
		nodeCnt++;
	}
	return (nodeCnt);
}
