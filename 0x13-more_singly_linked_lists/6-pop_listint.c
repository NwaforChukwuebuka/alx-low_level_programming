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
	listint_t *next;

	if (*head == NULL)
		return (0);
	
	next = current = *head;

	if (next)
	{
		i = current->n;
		next = current->next;
		free(*head);
		
	}
	else
	{
		i = 0;
	}

	return (i);

}
