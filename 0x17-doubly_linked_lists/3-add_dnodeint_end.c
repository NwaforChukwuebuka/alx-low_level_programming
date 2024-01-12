#include "lists.h"

/**
 * add_dnodeint_end - Adds a newNode at the end of a dlistint_t list.
 * @head: Ptr to the head of the dlistint_t list.
 * @n: Data to be inserted into the node
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the newNode node.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *last;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		newNode->prev = NULL;
		*head = newNode;
		return (newNode);
	}

	last = *head;
	while (last->next != NULL)
		last = last->next;
	last->next = newNode;
	newNode->prev = last;

	return (newNode);
}
