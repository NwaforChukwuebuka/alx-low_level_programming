#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * add_nodeint - adds a new node
 * @head: ptr to a ptr to the head
 * @n: integer to duplicate into a new node
 * Return: pointer to list_t struct
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));

	if (node == NULL)
	{
		free(node);
		return (NULL);
	}
	node->n = n;

	node->next = *head;
	*head = node;
	return (node);
}
