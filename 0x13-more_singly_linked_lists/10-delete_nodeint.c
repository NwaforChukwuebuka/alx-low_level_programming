#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * delete_nodeint_at_index - delete a node at index
  * @head: head of the list
  * @index: location of the node to delete
  * Return: pointer to head of list
  */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *tmp, *next_node;

	if (!head || !*head)
		return (-1);

	tmp = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	for (i = 0; i < (index - 1); i++)
	{
		tmp = tmp->next;
		if (tmp == NULL)
			return (-1);
	}

	next_node = tmp->next;
	tmp->next = next_node->next;
	free(next_node);
	return (1);
}
