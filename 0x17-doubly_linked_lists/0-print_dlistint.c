#include "lists.h"
/**
  * print_dlistint - prints all elements of a doubly linked list
  * @h: Pointer to the head of the list
  * Return: Number of nodes in the linked list
  */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodeCnt;
	nodeCnt = 0;
	while(h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodeCnt++;
	}
	return (nodeCnt);
}
