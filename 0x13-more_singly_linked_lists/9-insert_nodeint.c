#include "lists.h"
#include <stdlib.h>

/**
  * insert_nodeint_at_index - insert a node at index
  * @head: head of the list
  * @index: location to insert node
  * @n: value of the inserted node
  * Return: pointer to head of list
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	listint_t *tmp, *node;

	tmp = *head;
	node = malloc(sizeof(listint_t));

	if (node == NULL)
		return (NULL);

	node->n = n;

	if (index == 0)
	{
		node->next = tmp;
		*head = node;
		return (*head);
	}

	while (index > 1)
	{
		tmp = tmp->next;
		index--;
		if (!tmp)
		{
			free(node);
			return (NULL);
		}
	}
	node->next = tmp->next;
	tmp->next = node;
	return (node);
}
