#include "lists.h"

/**
 * free_listint - frees the list
 * @head: a pointer to the linked list
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *p;

	if (head == NULL)
		return;
	p = head;

	free_listint(p->next);

	free(p);
}
