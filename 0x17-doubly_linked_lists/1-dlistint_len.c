#include "lists.h"
/**
  * dlistint_len – prints the length of the list
  * @h: ptr to head of the list
  * Return: Number of nodes in the linked list
  */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodecnt;

	nodeCnt = 0;

	while (h)
		h = h->next;
		nodeCnt++;
	return (nodeCnt);
}
