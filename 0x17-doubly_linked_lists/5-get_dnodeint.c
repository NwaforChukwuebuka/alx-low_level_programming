#include "lists.h"

/**
 * get_dnodeint_at_index - Gets a node in a dlistint_t list at an index.
 * @head: Pt rot the head of the dlistint_t list.
 * @index: The index of the node we want.
 *
 * Return: If the node does not exist - NULL.
 *         Otherwise - the address of the located node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (index != 0)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
		index--;
	}

	return (head);
}
