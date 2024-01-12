#include "lists.h"

/**
 * add_dnodeint - Inserts a newNode node at the beginning of a dlistint_t list.
 * @head: Ptr to the head of the dlistint_t list.
 * @n: Data of the newNode node .
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new node.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = *head;
	if (*head != NULL)
		(*head)->prev = newNode;
	*head = newNode;

	return (newNode);
}
