#include "lists.h"
#include <stdlib.h>
/**
  * pop_listint - pops off the head of the list and returns its contents
  * @head: head of the list
  * Return: contents of head
  */
int pop_listint(listint_t **head)
{
	int i;
	listint_t *current;
	listint_t *origin;

	if (*head == NULL)
		return (0);
	
	origin = current = *head;

	if (*head)
	{
		i = current->n;
		*head = current->next;
		free(origin);
		
	}
	else
	{
		i = 0;
	}

	return (i);

}
