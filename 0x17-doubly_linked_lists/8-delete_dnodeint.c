#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node from a dlistint_t
 *                            at a given position.
 * @head: Ptr to the head of the dlistint_t.
 * @index: Given index of the node to delete.
 *
 * Return: if successful - 1.
 *         Otherwise - -1.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;

	if (*head == NULL)
		return (-1);

	while (index != 0)
	{
		if (temp == NULL)
			return (-1);
		temp = temp->next;
		index--;
	}

	if (temp == *head)
	{
		*head = temp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}

	else
	{
		temp->prev->next = temp->next;
		if (temp->next != NULL)
			temp->next->prev = temp->prev;
	}

	free(temp);
	return (1);
}
