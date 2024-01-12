#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a newNode node in a dlistint_t
 *                            list at a given index.
 * @h: Ptr to the head of the dlistint_t list.
 * @idx: The index to insert the newNode node.
 * @n: The data to be inserted .
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the newNode node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h, *newNode;

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (idx != 1)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
		idx--;
	}

	if (temp->next == NULL)
		return (add_dnodeint_end(h, n));

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->prev = temp;
	newNode->next = temp->next;
	temp->next->prev = newNode;
	temp->next = newNode;

	return (newNode);
}
