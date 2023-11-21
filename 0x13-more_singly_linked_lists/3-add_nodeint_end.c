#include "lists.h"
#include <stddef.h>

/**
 * add_nodeint_end - adds a new node
 * @head: ptr to a ptr to the head
 * @n: string to duplicate into a new node
 * Return: pointer to list_t struct
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *p;

	node = malloc(sizeof(listint_t));

	if (node == NULL)
	{
		free(node);
		return (NULL);
	}

	node->n = n;

	if (*head == NULL)
	{
		*head = node;
		return (*head);
	}
	p = *head;
	while (p->next != NULL)
	{
		p = p->next;
	}
	p->next = node;
	return (node);
}
